void __fastcall sub_19FBFD0(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rbp
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // r14
  size_t v11; // rbx
  unsigned __int64 v12; // rax
  unsigned int *v13; // rdi
  __int64 v14; // rax
  const char *v15; // rdi
  int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // r13
  unsigned int v19; // eax
  unsigned __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r12
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v35[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v37; // [rsp+30h] [rbp-98h] BYREF
  char v38; // [rsp+88h] [rbp-40h]
  unsigned int v39; // [rsp+90h] [rbp-38h]
  char v40; // [rsp+94h] [rbp-34h]

  v3 = (__int64)a2;
  v8 = *(_QWORD *)(sub_168B6C0((__int64)a1) + 17448);
  v9 = a2[5];
  v10 = *(_QWORD *)(v8 + 208);
  v11 = *(_QWORD *)(v10 + 512);
  if ( (v9 & 7) != 0 || (v12 = v9 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
    v15 = &byte_22F0C30;
    if ( v11 != j__strlen(&byte_22F0C30) )
      return;
  }
  else
  {
    v13 = *(unsigned int **)(v12 + 16);
    v14 = *v13;
    v15 = (const char *)(v13 + 4);
    if ( v11 != v14 )
      return;
  }
  if ( !v11 || (a2 = *(_QWORD **)(v10 + 504), !memcmp(v15, a2, v11)) )
  {
    v16 = *(_DWORD *)(v8 + 264);
    if ( (unsigned int)(v16 - 33) <= 0xE && v16 != 39 )
    {
      v17 = sub_19F7AC0(v3, (__int64)a2, v4, v5, v6, v7);
      v18 = v17;
      if ( v17 )
      {
        if ( v16 != *(_DWORD *)(v17 + 40) )
        {
          sub_168B9F0((__int64)v35, a1, *(_DWORD *)(v17 + 24), 0xF36u, 0);
          if ( v38 )
          {
            sub_AE9DF0(&v37, v18, 0xEu);
          }
          else if ( v40 )
          {
            v31 = sub_168B9E0(v35);
            v32 = v36;
            if ( v36 )
              v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 32LL))(v36);
            v34 = v32;
            v33 = sub_1587BC0(v31, &v34, v27, v28, v29, v30);
            sub_AE9DF0((unsigned __int8 **)(*v33 + 32LL * v39 + 8), v18, 0xEu);
          }
          sub_15F7200(v35);
          sub_B88650(v3, 1);
        }
      }
      else
      {
        v19 = sub_B73090(v3);
        v20 = v19 | ((unsigned __int64)v19 << 32);
        v21 = sub_168B6C0((__int64)a1);
        v22 = sub_B30FC0(v21, v16, v20);
        sub_B8CC60(v3, v22, v23, v24, v25, v26);
      }
    }
  }
}
