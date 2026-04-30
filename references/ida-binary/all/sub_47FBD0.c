unsigned __int64 __fastcall sub_47FBD0(__int64 a1, char a2, double a3)
{
  __int64 v3; // r8
  __int64 v4; // r9
  int *v5; // rax
  _QWORD *v6; // rdx
  _QWORD *v7; // r14
  _QWORD *i; // rbx
  __int64 v9; // rbx
  void *v10; // r15
  __int64 v11; // r8
  __int64 v12; // r9
  volatile signed __int32 *v13; // rax
  __int64 v14; // r15
  __int64 v15; // rax
  int v16; // edx
  __int64 v18; // rax
  __int64 v19; // [rsp+0h] [rbp-A8h]
  int v20; // [rsp+14h] [rbp-94h]
  int v21; // [rsp+18h] [rbp-90h]
  _QWORD v22[2]; // [rsp+20h] [rbp-88h] BYREF
  void *v23; // [rsp+30h] [rbp-78h] BYREF
  _QWORD *v24; // [rsp+38h] [rbp-70h]
  __int64 v25; // [rsp+40h] [rbp-68h]
  void *ptr[3]; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v27; // [rsp+68h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  sub_47AFB0(a1, a3);
  sub_4D2960(&v23);
  v19 = 0;
  v21 = v25;
  if ( !*(_BYTE *)(a1 + 520) )
    v19 = *(_QWORD *)(a1 + 512);
  v20 = *(_DWORD *)(*(_QWORD *)(v19 + 32) + 8LL) & 0x400;
  ++dword_8D1DC0;
  sub_4C8870(v19, 0);
  QT::QEvent::QEvent(v22, 2006);
  v22[0] = &ISaveStateEvent___vtable;
  v5 = (int *)v23;
  if ( !v23 || *(int *)v23 > 1 )
  {
    sub_1C92D0((__int64)&v23, 0, 0, 0, v3, v4);
    v5 = (int *)v23;
  }
  v6 = v24;
  v7 = v24;
  if ( !v5 || *v5 > 1 )
  {
    sub_1C92D0((__int64)&v23, 0, 0, 0, v3, v4);
    v6 = v24;
  }
  for ( i = &v6[v25]; i != v7; ++v7 )
    sub_51B5E0(*v7, v22);
  LODWORD(v9) = v21 - 1;
  if ( v21 - 1 >= 0 )
  {
    v9 = (int)v9;
    do
    {
      while ( 1 )
      {
        sub_4D2960(ptr);
        v10 = ptr[2];
        if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
          free(ptr[0]);
        if ( (__int64)v10 > v9 )
        {
          sub_4D2960(ptr);
          v13 = (volatile signed __int32 *)ptr[0];
          if ( !ptr[0] || *(int *)ptr[0] > 1 )
          {
            sub_1C92D0((__int64)ptr, 0, 0, 0, v11, v12);
            v13 = (volatile signed __int32 *)ptr[0];
          }
          v14 = *((_QWORD *)ptr[1] + v9);
          if ( v13 && !_InterlockedSub(v13, 1u) )
            free(ptr[0]);
          v15 = sub_4CD6B0(v14, 0);
          if ( !(unsigned __int8)sub_4B8CE0(v15) )
          {
            if ( a2 )
              break;
            v18 = sub_4CD6B0(v14, 0);
            if ( !(unsigned __int8)sub_4B8CC0(v18) )
              break;
          }
        }
        if ( (int)--v9 < 0 )
          goto LABEL_27;
      }
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 248LL))(a1, v14, 0);
      --v9;
    }
    while ( (int)v9 >= 0 );
  }
LABEL_27:
  v22[0] = &ISaveStateEvent___vtable;
  QT::QEvent::~QEvent((QT::QEvent *)v22);
  sub_4D2110(ptr);
  if ( !v20 )
    sub_4C8870(v19, 1);
  QT::QCoreApplication::sendPostedEvents(nullptr, nullptr, v16);
  if ( v23 && !_InterlockedSub((volatile signed __int32 *)v23, 1u) )
    free(v23);
  return v27 - __readfsqword(0x28u);
}
