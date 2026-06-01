void __fastcall sub_1A8F630(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5, __m128 a6)
{
  __int64 *v6; // rsi
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 (__fastcall *v20)(__int64); // rdx
  __int64 v21; // r14
  _QWORD *v22; // rdi
  __int64 (*v23)(void); // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r13
  int v31; // eax
  unsigned __int64 *v32; // rbx
  __int64 v33; // rbp
  unsigned __int64 v34; // rdx
  __int64 v35; // rax

  if ( *(_QWORD *)(a1 + 280) )
  {
    v6 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
    v9 = *v6;
    if ( *(_BYTE *)(*v6 + 16) == 34
      || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 34
      && (v9 = sub_F63050(*v6, v6, a3, a4)) != 0 )
    {
      v10 = *(_QWORD *)(v9 + 32) & 0xFFFFFFFFFFFFFFF0LL;
      v11 = *(_QWORD *)v10;
      v12 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v10 + 16LL) - 35;
      if ( (unsigned int)v12 > 1 )
      {
        v35 = sub_F63050(v11, v6, v12, a4);
        if ( !(unsigned __int8)sub_F65FA0(v35) )
          return;
      }
      else if ( !(unsigned __int8)sub_F65FA0(v11) )
      {
        return;
      }
      v15 = *(_QWORD *)(v9 + 32) & 0xFFFFFFFFFFFFFFF0LL;
      v16 = *(_QWORD *)v15;
      v17 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v15 + 16LL) - 35;
      if ( (unsigned int)v17 > 1 )
        v16 = sub_F63050(v16, v6, v17, v13);
      v18 = (_QWORD *)sub_9C7D40(v16, (__int64)v6, v17, v13, v14);
      v20 = *(__int64 (__fastcall **)(__int64))(*v18 + 32LL);
      if ( v20 == sub_A55E60 )
        v21 = v18[12];
      else
        v21 = v20((__int64)v18);
      v22 = *(_QWORD **)(a1 + 280);
      v23 = *(__int64 (**)(void))(*v22 + 32LL);
      if ( (char *)v23 == (char *)sub_A55E60 )
        v24 = v22[12];
      else
        v24 = v23();
      if ( v21 == v24 )
      {
        v25 = *(_QWORD *)(v9 + 32) & 0xFFFFFFFFFFFFFFF0LL;
        v26 = *(_QWORD *)v25;
        v27 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v25 + 16LL) - 35;
        if ( (unsigned int)v27 > 1 )
          v26 = sub_F63050(v26, v6, v27, v19);
        v28 = (__int64 *)sub_F672B0(v26);
        if ( v29 == 1 )
        {
          v30 = *v28;
          v31 = *(_DWORD *)(a3 + 16);
          if ( v31 )
          {
            v32 = (unsigned __int64 *)(a3 + 40);
            v33 = a3 + 8LL * (unsigned int)(v31 - 1) + 48;
            do
            {
              v34 = *v32++;
              sub_1A8F3A0(*(_QWORD **)a1, v30, v34, 0, a5, a6);
            }
            while ( v32 != (unsigned __int64 *)v33 );
          }
        }
      }
    }
  }
}
