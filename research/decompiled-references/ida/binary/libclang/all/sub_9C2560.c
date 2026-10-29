__int64 __fastcall sub_9C2560(_QWORD *a1, unsigned int a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rdi
  __int64 (__fastcall *v5)(__int64); // rax
  _QWORD *v6; // rdi
  __int64 (*v7)(void); // rdx
  _QWORD *v8; // rdi
  _QWORD **v9; // rdi
  char v10; // al
  unsigned int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rsi
  unsigned int v16; // edi
  int *v17; // rax
  int v18; // r8d
  __int64 v19; // rbx
  __int64 v20; // r13
  __int64 v21; // rbx
  __int64 v22; // rbp
  int v24; // eax
  int v25; // r10d
  _QWORD v26[4]; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v27; // [rsp+20h] [rbp-48h]
  int v28; // [rsp+30h] [rbp-38h]

  v3 = a2;
  v4 = (_QWORD *)a1[3];
  v5 = *(__int64 (__fastcall **)(__int64))(*v4 + 24LL);
  if ( v5 == sub_8D7F10 )
  {
    v6 = (_QWORD *)v4[3];
    v7 = *(__int64 (**)(void))(*v6 + 24LL);
    if ( (char *)v7 != (char *)v5 )
    {
LABEL_15:
      v10 = v7();
      goto LABEL_6;
    }
    v8 = (_QWORD *)v6[3];
    v5 = *(__int64 (__fastcall **)(__int64))(*v8 + 24LL);
    if ( (char *)v5 == (char *)v7 )
    {
      v9 = (_QWORD **)v8[3];
      v7 = (__int64 (*)(void))(*v9)[3];
      if ( (char *)v7 == (char *)v5 )
      {
        v10 = (*(__int64 (__fastcall **)(_QWORD *))(*v9[3] + 24LL))(v9[3]);
        goto LABEL_6;
      }
      goto LABEL_15;
    }
  }
  v10 = ((__int64 (*)(void))v5)();
LABEL_6:
  v11 = 0;
  if ( !v10 )
  {
    v12 = a1[25];
    v13 = a1[23];
    v14 = *(unsigned int *)(v12 + 208);
    v15 = *(_QWORD *)(v12 + 192);
    if ( (_DWORD)v14 )
    {
      v16 = (v14 - 1) & (37 * v3);
      v17 = (int *)(v15 + 16LL * v16);
      v18 = *v17;
      if ( (_DWORD)v3 == *v17 )
      {
LABEL_9:
        if ( v17 != (int *)(16 * v14 + v15) )
        {
          sub_A1BF70(v26, *((_QWORD *)v17 + 1));
          v19 = v26[3];
          v20 = v26[0];
          if ( !v28 && *(_BYTE *)(sub_8E5480((__int64)v26) + 51) && v27 == v20 )
            v21 = v19 + v27 + 72;
          else
            v21 = v19 + v20 + 40;
          sub_A1C0C0(v26);
          goto LABEL_13;
        }
      }
      else
      {
        v24 = 1;
        while ( v18 != -1 )
        {
          v25 = v24 + 1;
          v16 = (v14 - 1) & (v24 + v16);
          v17 = (int *)(v15 + 16LL * v16);
          v18 = *v17;
          if ( (_DWORD)v3 == *v17 )
            goto LABEL_9;
          v24 = v25;
        }
      }
    }
    v21 = *(_QWORD *)(v12 + 168) + v3 - *(unsigned int *)(v12 + 160);
LABEL_13:
    v22 = sub_A1A4E0(v13, 72);
    sub_A1BFE0(v22, v21);
    v11 = 1;
    *(_QWORD *)(v22 + 56) = *(_QWORD *)(v21 + 56);
    *(_DWORD *)(v22 + 64) = *(_DWORD *)(v21 + 64);
  }
  return v11;
}

