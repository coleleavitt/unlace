__int64 __fastcall sub_3067C0(__int64 a1, __int64 *a2)
{
  _QWORD *v3; // rbp
  unsigned __int64 v4; // r13
  __int64 v5; // r8
  bool (__fastcall *v6)(__int64); // rax
  __int64 v7; // rdi
  int v8; // eax
  int v9; // r15d
  __int64 v10; // rax
  __int64 (__fastcall *v11)(); // rax
  __int64 func; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdi
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
    v3 = *(_QWORD **)(a1 + 48);
    if ( v3 )
    {
      v4 = 0;
      while ( 1 )
      {
        v11 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 144LL);
        if ( v11 != sub_306B80 )
        {
          a2 = (__int64 *)v4;
          v10 = ((__int64 (__fastcall *)(__int64, unsigned __int64))v11)(a1, v4);
LABEL_11:
          if ( v10 != -1 && (__int64 *)v10 == v21 )
            return v4;
          goto LABEL_13;
        }
        switch_dbctx(*(int *)(a1 + 8));
        if ( *(_QWORD *)(a1 + 72) )
          break;
        func = get_func(*(_QWORD *)(a1 + 80));
        if ( func )
        {
          v29 = func;
          v14 = *(_QWORD *)(a1 + 64);
          v31 = 0;
          v30 = 0;
          a2 = *(__int64 **)(v14 + 112);
          sub_14CDC0(&v28, (__int64)a2, &v29, nullptr, 1);
          sub_140140((_QWORD *)(a1 + 72), (__int64)a2);
          v15 = v28;
          *(_QWORD *)(a1 + 72) = v28;
          if ( v15 )
            ++*(_DWORD *)(v15 + 104);
          sub_140140(&v28, (__int64)a2);
          if ( v30 )
          {
            *(_QWORD *)&v31 = 0;
            qfree(v30);
          }
          v17 = *(_QWORD *)(a1 + 72);
          if ( !v17 )
            goto LABEL_13;
          sub_2581E0(v17, (__int64)a2, v16);
        }
        if ( *(_QWORD *)(a1 + 72) )
          break;
LABEL_13:
        if ( v3 == (_QWORD *)++v4 )
          return -1;
      }
      if ( v4 >= *(_QWORD *)(a1 + 48) )
        sub_2ADE00();
      v5 = *(_QWORD *)(a1 + 40) + (v4 << 6);
      v6 = **(bool (__fastcall ***)(__int64))v5;
      if ( v6 == sub_2AD1C0 )
      {
        if ( *(_QWORD *)(v5 + 8) == *(_QWORD *)(v5 + 48) )
          goto LABEL_13;
        v7 = *(_QWORD *)(a1 + 72);
        v27 = v7;
        if ( v7 )
        {
LABEL_9:
          v8 = *(_DWORD *)(v7 + 104);
          *(_DWORD *)(v7 + 104) = v8 + 1;
          v9 = *(_DWORD *)(v5 + 56);
          if ( v9 != -2 )
          {
LABEL_10:
            sub_140140(&v27, (__int64)a2);
            v10 = v9;
            if ( v9 == -1 )
              goto LABEL_13;
            goto LABEL_11;
          }
          v19 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 16LL);
          v28 = v7;
          *(_DWORD *)(v7 + 104) = v8 + 2;
          if ( v19 == sub_2C22D0 )
          {
            a2 = *(__int64 **)(v5 + 8);
            v26 = -1;
            if ( a2 != (__int64 *)-1LL )
            {
              v29 = v7;
              *(_DWORD *)(v7 + 104) = v8 + 3;
              goto LABEL_36;
            }
            goto LABEL_38;
          }
          goto LABEL_39;
        }
      }
      else
      {
        v22 = *(_QWORD *)(a1 + 40) + (v4 << 6);
        v18 = v6(v5);
        v5 = v22;
        if ( !v18 )
          goto LABEL_13;
        v7 = *(_QWORD *)(a1 + 72);
        v27 = v7;
        if ( v7 )
          goto LABEL_9;
      }
      v9 = *(_DWORD *)(v5 + 56);
      if ( v9 != -2 )
        goto LABEL_10;
      v19 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 16LL);
      v28 = 0;
      if ( v19 == sub_2C22D0 )
      {
        a2 = *(__int64 **)(v5 + 8);
        v26 = -1;
        if ( a2 != (__int64 *)-1LL )
        {
          v29 = 0;
LABEL_36:
          v23 = v5;
          sub_2C07C0(v7, (__int64)a2, 0, (__int64)&v26);
          sub_140140(&v29, (__int64)a2);
          v20 = v26;
          v5 = v23;
LABEL_37:
          *(_DWORD *)(v5 + 56) = v20;
          v24 = v5;
          sub_140140(&v28, (__int64)a2);
          v9 = *(_DWORD *)(v24 + 56);
          goto LABEL_10;
        }
LABEL_38:
        v20 = -1;
        goto LABEL_37;
      }
LABEL_39:
      v25 = v5;
      a2 = &v28;
      v20 = v19(v5, &v28);
      v5 = v25;
      goto LABEL_37;
    }
  }
  return -1;
}
