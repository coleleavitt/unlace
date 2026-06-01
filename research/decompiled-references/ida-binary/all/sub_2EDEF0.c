unsigned __int64 __fastcall sub_2EDEF0(QT::QSplitter *this)
{
  __int64 v1; // r15
  bool v2; // zf
  __int64 v3; // r12
  int v4; // r13d
  int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r9
  int v18; // edx
  int v19; // [rsp+Ch] [rbp-6Ch]
  int v20; // [rsp+14h] [rbp-64h] BYREF
  int v21; // [rsp+18h] [rbp-60h] BYREF
  int v22; // [rsp+1Ch] [rbp-5Ch] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-58h] BYREF
  int *v24; // [rsp+30h] [rbp-48h]
  unsigned __int64 v25; // [rsp+38h] [rbp-40h]

  v1 = 0;
  v2 = *((_BYTE *)this + 104) == 0;
  v25 = __readfsqword(0x28u);
  if ( v2 )
    v1 = *((_QWORD *)this + 12);
  v3 = 0;
  if ( !*((_BYTE *)this + 144) )
    v3 = *((_QWORD *)this + 17);
  v4 = *((_DWORD *)this + 41);
  v19 = *((_DWORD *)this + 40);
  v5 = *(_DWORD *)(*((_QWORD *)this + 4) + 28LL) + 1 - *(_DWORD *)(*((_QWORD *)this + 4) + 20LL);
  *(_OWORD *)ptr = 0;
  v24 = nullptr;
  v6 = QT::QSplitter::handleWidth(this);
  if ( v1 )
  {
    v20 = v19;
    v10 = v5 - v19 - v6;
    v11 = (unsigned int)(v10 - (v4 + v6));
    if ( v3 )
      v10 -= v4 + v6;
    sub_2EDC10((int **)ptr, v24, &v20, v11, v8, v9);
    if ( !ptr[0] || *(int *)ptr[0] > 1 )
      sub_187120((__int64)ptr, 0, 0, 0, v8, v9);
  }
  else
  {
    v18 = v5;
    v10 = v5 - v4 - v6;
    if ( !v3 )
      v10 = v18;
  }
  v21 = v10;
  sub_2EDC10((int **)ptr, v24, &v21, v7, v8, v9);
  if ( !ptr[0] || *(int *)ptr[0] > 1 )
    sub_187120((__int64)ptr, 0, 0, 0, v13, v14);
  if ( v3 )
  {
    v22 = v4;
    sub_2EDC10((int **)ptr, v24, &v22, v12, v13, v14);
    if ( !ptr[0] || *(int *)ptr[0] > 1 )
      sub_187120((__int64)ptr, 0, 0, 0, v15, v16);
  }
  QT::QSplitter::setSizes(this, ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v25 - __readfsqword(0x28u);
}
