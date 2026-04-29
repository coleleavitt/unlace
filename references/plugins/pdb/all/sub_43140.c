__int64 *__fastcall sub_43140(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  _QWORD **v5; // r13
  __int64 **v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  unsigned int *v8; // rax
  int v9; // eax
  __int64 (__fastcall *v10)(__int64, unsigned int *); // rax
  unsigned int *v11; // rax
  unsigned int v12; // esi
  __int64 v13; // rax
  void (__fastcall *v14)(void *); // rax
  unsigned int v16; // [rsp+Ch] [rbp-3Ch] BYREF
  __int64 v17; // [rsp+10h] [rbp-38h]
  unsigned __int64 v18; // [rsp+18h] [rbp-30h]

  v2 = *(_QWORD *)(a2 + 16);
  v18 = __readfsqword(0x28u);
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v2 + 104) + 128LL))(
         *(_QWORD *)(v2 + 104),
         0,
         0);
  v16 = 0;
  v5 = *(_QWORD ***)(a2 + 24);
  v17 = v4;
  v6 = (__int64 **)v4;
  v7 = (__int64 (__fastcall *)(__int64, __int64))(*v5)[15];
  if ( v7 == sub_2E020 )
  {
    v8 = (unsigned int *)sub_2CEC0(v5[2], 0x4000000, 0x400u, 0x4000000);
    if ( !v8 )
      goto LABEL_10;
    v9 = (*(__int64 (__fastcall **)(_QWORD *, __int64 **, _QWORD))(*v5[1] + 32LL))(v5[1], v6, *v8);
  }
  else
  {
    v9 = v7((__int64)v5, (__int64)v6);
  }
  if ( !v9 )
  {
    v10 = (__int64 (__fastcall *)(__int64, unsigned int *))(*v6)[22];
    if ( v10 == sub_2DEA0 )
    {
      v11 = (unsigned int *)sub_2CEC0(v6[2], 0x80000, 0x400u, 0x4000000);
      if ( v11 )
      {
        v12 = *v11;
        v16 = *v11;
LABEL_8:
        v13 = sub_42E60(*(_QWORD *)(a2 + 16), v12);
        goto LABEL_11;
      }
    }
    else if ( !(unsigned int)v10((__int64)v6, &v16) )
    {
      v12 = v16;
      goto LABEL_8;
    }
  }
LABEL_10:
  v13 = 0;
LABEL_11:
  *a1 = v13;
  if ( v6 )
  {
    v14 = (void (__fastcall *)(void *))(*v6)[37];
    if ( v14 == sub_243F0 )
      operator delete(v6, 0x18u);
    else
      v14(v6);
  }
  return a1;
}
