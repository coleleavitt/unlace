__int64 __fastcall sub_18383D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 *v6; // rbp
  __int64 v7; // r13
  unsigned int v8; // ebx
  _DWORD *v9; // rdi
  unsigned int v10; // r12d
  char v11; // al
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 *v17; // rax
  __int64 v19; // [rsp+0h] [rbp-A8h]
  int v20; // [rsp+8h] [rbp-A0h]
  int v21; // [rsp+Ch] [rbp-9Ch]
  bool *v22; // [rsp+10h] [rbp-98h]
  bool v23; // [rsp+32h] [rbp-76h] BYREF
  bool v24; // [rsp+33h] [rbp-75h] BYREF
  unsigned int v25; // [rsp+34h] [rbp-74h] BYREF
  __int64 v26; // [rsp+38h] [rbp-70h] BYREF
  __int64 (__fastcall **v27)(); // [rsp+40h] [rbp-68h] BYREF
  int v28; // [rsp+48h] [rbp-60h]
  bool *v29; // [rsp+50h] [rbp-58h]
  bool *v30; // [rsp+58h] [rbp-50h]
  __int64 *v31; // [rsp+60h] [rbp-48h]
  int *v32; // [rsp+68h] [rbp-40h]

  v21 = a3;
  v5 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v5 + 16) != 26 )
    v5 = sub_F63050(v5, a2, a3, a4);
  v6 = (__int64 *)(v5 + 48);
  v7 = v5 + 8LL * *(unsigned __int16 *)(v5 + 22) + 48;
  if ( v5 + 48 != v7 )
  {
    v8 = 0;
    v22 = &v24;
    do
    {
      v9 = *(_DWORD **)(*(_QWORD *)(a2 + 120) + 8LL * v8);
      v10 = v9[6];
      v11 = *(_BYTE *)(a2 + 28);
      v24 = (*(_BYTE *)(a2 + 84) & 3) == 2;
      v23 = (v11 & 0x7F) == 38;
      ++v8;
      v12 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 16LL))(v9);
      v25 = v8;
      v26 = v12;
      v16 = *v6;
      v17 = (__int64 *)(*v6 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(*v17 + 17) & 4) == 0 )
      {
        if ( v21 )
        {
          if ( sub_F67430(*v17, *(_QWORD *)(a1 + 248), v16, v13, v14, v15) != 1 )
            return 0;
        }
        else
        {
          v28 = 3482;
          v27 = off_2BC6CE0;
          v29 = v22;
          v30 = &v23;
          v31 = &v26;
          v32 = (int *)&v25;
          if ( (unsigned __int8)sub_1E65DF0(a1, v10, v16, &v27, v14, v15, v19, v20, v22) )
            return 0;
        }
      }
      ++v6;
    }
    while ( (__int64 *)v7 != v6 );
  }
  return 1;
}
