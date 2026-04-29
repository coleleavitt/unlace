__int64 __fastcall sub_304580(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbp
  __int64 *v4; // rbx
  __int64 v5; // r12
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
  __int64 (__fastcall *v18)(__int64, __int64 *); // rdx
  int v19; // eax
  __int64 *v20; // [rsp+0h] [rbp-98h]
  __int64 *v21; // [rsp+8h] [rbp-90h]
  int v22; // [rsp+1Ch] [rbp-7Ch] BYREF
  __int64 v23; // [rsp+20h] [rbp-78h] BYREF
  __int64 v24; // [rsp+28h] [rbp-70h] BYREF
  __int64 v25; // [rsp+30h] [rbp-68h] BYREF
  __int64 v26; // [rsp+38h] [rbp-60h]
  __int128 v27; // [rsp+40h] [rbp-58h]
  unsigned __int64 v28; // [rsp+58h] [rbp-40h]

  v21 = a2;
  v28 = __readfsqword(0x28u);
  if ( sub_304440(a1) )
  {
    v20 = *(__int64 **)(a1 + 48);
    if ( v20 )
    {
      v3 = 0;
      v4 = nullptr;
      while ( 1 )
      {
        v11 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 144LL);
        if ( v11 != sub_304930 )
        {
          a2 = v4;
          v10 = ((__int64 (__fastcall *)(__int64, __int64 *))v11)(a1, v4);
LABEL_11:
          if ( v10 != -1 && (__int64 *)v10 == v21 )
            return (__int64)v4;
          goto LABEL_13;
        }
        switch_dbctx(*(int *)(a1 + 8));
        if ( *(_QWORD *)(a1 + 72) )
          break;
        func = get_func(*(_QWORD *)(a1 + 80));
        if ( func )
        {
          v25 = func;
          v14 = *(_QWORD *)(a1 + 64);
          v27 = 0;
          v26 = 0;
          a2 = *(__int64 **)(v14 + 112);
          sub_148900(&v24, (__int64)a2, &v25, nullptr, 1);
          sub_13BC80((_QWORD *)(a1 + 72), (__int64)a2);
          v15 = v24;
          *(_QWORD *)(a1 + 72) = v24;
          if ( v15 )
            ++*(_DWORD *)(v15 + 104);
          sub_13BC80(&v24, (__int64)a2);
          if ( v26 )
          {
            *(_QWORD *)&v27 = 0;
            qfree(v26);
          }
          v17 = *(_QWORD *)(a1 + 72);
          if ( !v17 )
            goto LABEL_13;
          sub_2535E0(v17, (__int64)a2, v16);
        }
        if ( *(_QWORD *)(a1 + 72) )
          break;
LABEL_13:
        v4 = (__int64 *)((char *)v4 + 1);
        v3 += 88;
        if ( v20 == v4 )
          return -1;
      }
      if ( (unsigned __int64)v4 >= *(_QWORD *)(a1 + 48) )
        sub_2A9200();
      v5 = v3 + *(_QWORD *)(a1 + 40);
      v6 = **(bool (__fastcall ***)(__int64))v5;
      if ( v6 == sub_2A8A60 )
      {
        a2 = (__int64 *)(v5 + 64);
        if ( !(unsigned int)sub_253040(v5 + 8, v5 + 64) )
          goto LABEL_13;
        v7 = *(_QWORD *)(a1 + 72);
        v23 = v7;
        if ( v7 )
        {
LABEL_9:
          v8 = *(_DWORD *)(v7 + 104);
          *(_DWORD *)(v7 + 104) = v8 + 1;
          v9 = *(_DWORD *)(v5 + 80);
          if ( v9 != -2 )
          {
LABEL_10:
            sub_13BC80(&v23, (__int64)a2);
            v10 = v9;
            if ( v9 == -1 )
              goto LABEL_13;
            goto LABEL_11;
          }
          v18 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 16LL);
          v24 = v7;
          *(_DWORD *)(v7 + 104) = v8 + 2;
          if ( v18 == sub_2BD270 )
          {
            a2 = *(__int64 **)(v5 + 8);
            v22 = -1;
            if ( a2 != (__int64 *)-1LL )
            {
              v25 = v7;
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
        if ( !v6(v3 + *(_QWORD *)(a1 + 40)) )
          goto LABEL_13;
        v7 = *(_QWORD *)(a1 + 72);
        v23 = v7;
        if ( v7 )
          goto LABEL_9;
      }
      v9 = *(_DWORD *)(v5 + 80);
      if ( v9 != -2 )
        goto LABEL_10;
      v18 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 16LL);
      v24 = 0;
      if ( v18 == sub_2BD270 )
      {
        a2 = *(__int64 **)(v5 + 8);
        v22 = -1;
        if ( a2 != (__int64 *)-1LL )
        {
          v25 = 0;
LABEL_36:
          sub_2BBBC0(v7, (__int64)a2, 0, (__int64)&v22);
          sub_13BC80(&v25, (__int64)a2);
          v19 = v22;
LABEL_37:
          *(_DWORD *)(v5 + 80) = v19;
          sub_13BC80(&v24, (__int64)a2);
          v9 = *(_DWORD *)(v5 + 80);
          goto LABEL_10;
        }
LABEL_38:
        v19 = -1;
        goto LABEL_37;
      }
LABEL_39:
      a2 = &v24;
      v19 = v18(v5, &v24);
      goto LABEL_37;
    }
  }
  return -1;
}
