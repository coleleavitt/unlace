__int64 __fastcall sub_308140(__int64 a1, __int64 *a2)
{
  __int64 *v3; // r12
  __int64 v4; // rbp
  __int64 *v5; // rbx
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
  __int64 v18; // rdi
  bool v19; // al
  __int64 (__fastcall *v20)(__int64, __int64 *); // rdx
  __int64 v21; // rsi
  int v22; // eax
  __int64 *v23; // [rsp+0h] [rbp-98h]
  __int64 v24; // [rsp+8h] [rbp-90h]
  __int64 v25; // [rsp+8h] [rbp-90h]
  __int64 v26; // [rsp+8h] [rbp-90h]
  __int64 v27; // [rsp+8h] [rbp-90h]
  int v28; // [rsp+1Ch] [rbp-7Ch] BYREF
  __int64 v29; // [rsp+20h] [rbp-78h] BYREF
  __int64 v30; // [rsp+28h] [rbp-70h] BYREF
  __int64 v31; // [rsp+30h] [rbp-68h] BYREF
  __int64 v32; // [rsp+38h] [rbp-60h]
  __int128 v33; // [rsp+40h] [rbp-58h]
  unsigned __int64 v34; // [rsp+58h] [rbp-40h]

  v23 = a2;
  v34 = __readfsqword(0x28u);
  if ( sub_308000(a1) )
  {
    v3 = *(__int64 **)(a1 + 48);
    if ( v3 )
    {
      v4 = 0;
      v5 = nullptr;
      while ( 1 )
      {
        v12 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 144LL);
        if ( v12 != sub_308500 )
        {
          a2 = v5;
          v11 = ((__int64 (__fastcall *)(__int64, __int64 *))v12)(a1, v5);
LABEL_11:
          if ( v11 != -1 && (__int64 *)v11 == v23 )
            return (__int64)v5;
          goto LABEL_13;
        }
        switch_dbctx(*(int *)(a1 + 8));
        if ( *(_QWORD *)(a1 + 72) )
          break;
        func = get_func(*(_QWORD *)(a1 + 80));
        if ( func )
        {
          v31 = func;
          v15 = *(_QWORD *)(a1 + 64);
          v33 = 0;
          v32 = 0;
          a2 = *(__int64 **)(v15 + 112);
          sub_14C800(&v30, (__int64)a2, &v31, nullptr, 1);
          sub_13FB80((_QWORD *)(a1 + 72), (__int64)a2);
          v16 = v30;
          *(_QWORD *)(a1 + 72) = v30;
          if ( v16 )
            ++*(_DWORD *)(v16 + 104);
          sub_13FB80(&v30, (__int64)a2);
          if ( v32 )
          {
            *(_QWORD *)&v33 = 0;
            qfree(v32);
          }
          v18 = *(_QWORD *)(a1 + 72);
          if ( !v18 )
            goto LABEL_13;
          sub_2585A0(v18, (__int64)a2, v17);
        }
        if ( *(_QWORD *)(a1 + 72) )
          break;
LABEL_13:
        v5 = (__int64 *)((char *)v5 + 1);
        v4 += 56;
        if ( v3 == v5 )
          return -1;
      }
      if ( (unsigned __int64)v5 >= *(_QWORD *)(a1 + 48) )
        sub_2AE1C0();
      v6 = v4 + *(_QWORD *)(a1 + 40);
      v7 = **(bool (__fastcall ***)(__int64))v6;
      if ( v7 == sub_2AD530 )
      {
        if ( *(_QWORD *)(v6 + 8) == *(_QWORD *)(v6 + 40) )
          goto LABEL_13;
        v8 = *(_QWORD *)(a1 + 72);
        v29 = v8;
        if ( v8 )
        {
LABEL_9:
          v9 = *(_DWORD *)(v8 + 104);
          *(_DWORD *)(v8 + 104) = v9 + 1;
          v10 = *(_DWORD *)(v6 + 48);
          if ( v10 != -2 )
          {
LABEL_10:
            sub_13FB80(&v29, (__int64)a2);
            v11 = v10;
            if ( v10 == -1 )
              goto LABEL_13;
            goto LABEL_11;
          }
          v20 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 16LL);
          v30 = v8;
          *(_DWORD *)(v8 + 104) = v9 + 2;
          if ( v20 == sub_2C23F0 )
          {
            v21 = *(_QWORD *)(v6 + 8);
            v28 = -1;
            if ( v21 != -1 )
            {
              v31 = v8;
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
        v24 = v4 + *(_QWORD *)(a1 + 40);
        v19 = v7(v6);
        v6 = v24;
        if ( !v19 )
          goto LABEL_13;
        v8 = *(_QWORD *)(a1 + 72);
        v29 = v8;
        if ( v8 )
          goto LABEL_9;
      }
      v10 = *(_DWORD *)(v6 + 48);
      if ( v10 != -2 )
        goto LABEL_10;
      v20 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 16LL);
      v30 = 0;
      if ( v20 == sub_2C23F0 )
      {
        v21 = *(_QWORD *)(v6 + 8);
        v28 = -1;
        if ( v21 != -1 )
        {
          v31 = 0;
LABEL_36:
          v25 = v6;
          sub_2C0B80(v8, v21, 0, (__int64)&v28);
          sub_13FB80(&v31, v21);
          a2 = &v30;
          v22 = v28;
          v6 = v25;
LABEL_37:
          *(_DWORD *)(v6 + 48) = v22;
          v26 = v6;
          sub_13FB80(&v30, (__int64)&v30);
          v10 = *(_DWORD *)(v26 + 48);
          goto LABEL_10;
        }
LABEL_38:
        a2 = &v30;
        v22 = -1;
        goto LABEL_37;
      }
LABEL_39:
      v27 = v6;
      a2 = &v30;
      v22 = v20(v6, &v30);
      v6 = v27;
      goto LABEL_37;
    }
  }
  return -1;
}
