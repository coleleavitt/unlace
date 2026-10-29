__int64 __fastcall sub_3067C0(__int64 a1, __int64 *a2)
{
  __int64 *v3; // rbp
  __int64 *v4; // r13
  __int64 v5; // rdi
  __int64 v6; // r8
  bool (__fastcall *v7)(__int64); // rax
  __int64 v8; // rdi
  int v9; // eax
  int v10; // r15d
  __int64 v11; // rax
  __int64 (__fastcall *v12)(); // rax
  __int64 func; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  bool v18; // al
  __int64 (__fastcall *v19)(__int64, __int64 *); // rdx
  int v20; // eax
  __int64 *v21; // [rsp+0h] [rbp-98h]
  __int64 v22; // [rsp+8h] [rbp-90h]
  __int64 v23; // [rsp+8h] [rbp-90h]
  __int64 v24; // [rsp+8h] [rbp-90h]
  __int64 v25; // [rsp+8h] [rbp-90h]
  int v26; // [rsp+1Ch] [rbp-7Ch] BYREF
  __int64 v27; // [rsp+20h] [rbp-78h] BYREF
  __int64 v28; // [rsp+28h] [rbp-70h] BYREF
  __int64 v29; // [rsp+30h] [rbp-68h] BYREF
  __int64 v30; // [rsp+38h] [rbp-60h]
  __int128 v31; // [rsp+40h] [rbp-58h]
  unsigned __int64 v32; // [rsp+58h] [rbp-40h]

  v21 = a2;
  v32 = __readfsqword(0x28u);
  if ( sub_306680(a1) )
  {
    v3 = *(__int64 **)(a1 + 48);
    if ( v3 )
    {
      v4 = nullptr;
      while ( 1 )
      {
        v12 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 144LL);
        if ( v12 != sub_306B80 )
        {
          a2 = v4;
          v11 = ((__int64 (__fastcall *)(__int64, __int64 *))v12)(a1, v4);
LABEL_11:
          if ( v11 != -1 && (__int64 *)v11 == v21 )
            return (__int64)v4;
          goto LABEL_13;
        }
        v5 = *(int *)(a1 + 8);
        switch_dbctx();
        if ( *(_QWORD *)(a1 + 72) )
          break;
        v5 = *(_QWORD *)(a1 + 80);
        func = get_func();
        if ( func )
        {
          v29 = func;
          v15 = *(_QWORD *)(a1 + 64);
          v31 = 0;
          v30 = 0;
          a2 = *(__int64 **)(v15 + 112);
          sub_14CDC0(&v28, (__int64)a2, &v29, nullptr, 1);
          sub_140140((_QWORD *)(a1 + 72), (__int64)a2);
          v16 = v28;
          *(_QWORD *)(a1 + 72) = v28;
          if ( v16 )
            ++*(_DWORD *)(v16 + 104);
          sub_140140(&v28, (__int64)a2);
          if ( v30 )
          {
            *(_QWORD *)&v31 = 0;
            qfree(v30);
          }
          v5 = *(_QWORD *)(a1 + 72);
          if ( !v5 )
            goto LABEL_13;
          sub_2581E0(v5, (__int64)a2, v17);
        }
        if ( *(_QWORD *)(a1 + 72) )
          break;
LABEL_13:
        v4 = (__int64 *)((char *)v4 + 1);
        if ( v3 == v4 )
          return -1;
      }
      if ( (unsigned __int64)v4 >= *(_QWORD *)(a1 + 48) )
        sub_2ADE00(v5);
      v6 = *(_QWORD *)(a1 + 40) + ((_QWORD)v4 << 6);
      v7 = **(bool (__fastcall ***)(__int64))v6;
      if ( v7 == sub_2AD1C0 )
      {
        if ( *(_QWORD *)(v6 + 8) == *(_QWORD *)(v6 + 48) )
          goto LABEL_13;
        v8 = *(_QWORD *)(a1 + 72);
        v27 = v8;
        if ( v8 )
        {
LABEL_9:
          v9 = *(_DWORD *)(v8 + 104);
          *(_DWORD *)(v8 + 104) = v9 + 1;
          v10 = *(_DWORD *)(v6 + 56);
          if ( v10 != -2 )
          {
LABEL_10:
            sub_140140(&v27, (__int64)a2);
            v11 = v10;
            if ( v10 == -1 )
              goto LABEL_13;
            goto LABEL_11;
          }
          v19 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 16LL);
          v28 = v8;
          *(_DWORD *)(v8 + 104) = v9 + 2;
          if ( v19 == sub_2C22D0 )
          {
            a2 = *(__int64 **)(v6 + 8);
            v26 = -1;
            if ( a2 != (__int64 *)-1LL )
            {
              v29 = v8;
              *(_DWORD *)(v8 + 104) = v9 + 3;
              goto LABEL_36;
            }
            goto LABEL_38;
          }
          goto LABEL_39;
        }
      }
      else
      {
        v22 = *(_QWORD *)(a1 + 40) + ((_QWORD)v4 << 6);
        v18 = v7(v6);
        v6 = v22;
        if ( !v18 )
          goto LABEL_13;
        v8 = *(_QWORD *)(a1 + 72);
        v27 = v8;
        if ( v8 )
          goto LABEL_9;
      }
      v10 = *(_DWORD *)(v6 + 56);
      if ( v10 != -2 )
        goto LABEL_10;
      v19 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 16LL);
      v28 = 0;
      if ( v19 == sub_2C22D0 )
      {
        a2 = *(__int64 **)(v6 + 8);
        v26 = -1;
        if ( a2 != (__int64 *)-1LL )
        {
          v29 = 0;
LABEL_36:
          v23 = v6;
          sub_2C07C0(v8, (__int64)a2, 0, (__int64)&v26);
          sub_140140(&v29, (__int64)a2);
          v20 = v26;
          v6 = v23;
LABEL_37:
          *(_DWORD *)(v6 + 56) = v20;
          v24 = v6;
          sub_140140(&v28, (__int64)a2);
          v10 = *(_DWORD *)(v24 + 56);
          goto LABEL_10;
        }
LABEL_38:
        v20 = -1;
        goto LABEL_37;
      }
LABEL_39:
      v25 = v6;
      a2 = &v28;
      v20 = v19(v6, &v28);
      v6 = v25;
      goto LABEL_37;
    }
  }
  return -1;
}
