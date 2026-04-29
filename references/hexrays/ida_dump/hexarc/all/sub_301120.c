__int64 __fastcall sub_301120(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  unsigned __int64 v4; // r13
  __int64 v5; // rcx
  bool (__fastcall *v6)(__int64); // rax
  __int64 v7; // rax
  int v8; // edx
  int v9; // r15d
  __int64 v10; // rax
  __int64 (__fastcall *v11)(); // rax
  __int64 func; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdi
  bool v18; // al
  __int64 (__fastcall *v19)(__int64, __int64 *); // r8
  __int64 v20; // [rsp+0h] [rbp-88h]
  __int64 v21; // [rsp+8h] [rbp-80h]
  __int64 v22; // [rsp+8h] [rbp-80h]
  __int64 v23; // [rsp+18h] [rbp-70h] BYREF
  __int64 v24; // [rsp+20h] [rbp-68h] BYREF
  __int64 v25; // [rsp+28h] [rbp-60h]
  __int128 v26; // [rsp+30h] [rbp-58h]
  unsigned __int64 v27; // [rsp+48h] [rbp-40h]

  v20 = a2;
  v27 = __readfsqword(0x28u);
  if ( sub_300FE0(a1) )
  {
    v3 = *(_QWORD *)(a1 + 48);
    if ( v3 )
    {
      v4 = 0;
      while ( 1 )
      {
        v11 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 144LL);
        if ( v11 != sub_301430 )
        {
          a2 = v4;
          v10 = ((__int64 (__fastcall *)(__int64, unsigned __int64))v11)(a1, v4);
LABEL_11:
          if ( v10 != -1 && v10 == v20 )
            return v4;
          goto LABEL_13;
        }
        switch_dbctx(*(int *)(a1 + 8));
        if ( *(_QWORD *)(a1 + 72) )
          break;
        func = get_func(*(_QWORD *)(a1 + 80));
        if ( func )
        {
          v24 = func;
          v14 = *(_QWORD *)(a1 + 64);
          v26 = 0;
          v25 = 0;
          a2 = *(_QWORD *)(v14 + 112);
          sub_146700(&v23, a2, &v24, nullptr, 1);
          sub_139A80((_QWORD *)(a1 + 72), a2);
          v15 = v23;
          *(_QWORD *)(a1 + 72) = v23;
          if ( v15 )
            ++*(_DWORD *)(v15 + 104);
          sub_139A80(&v23, a2);
          if ( v25 )
          {
            *(_QWORD *)&v26 = 0;
            qfree(v25);
          }
          v17 = *(_QWORD *)(a1 + 72);
          if ( !v17 )
            goto LABEL_13;
          sub_250E60(v17, a2, v16);
        }
        if ( *(_QWORD *)(a1 + 72) )
          break;
LABEL_13:
        if ( v3 == ++v4 )
          return -1;
      }
      if ( v4 >= *(_QWORD *)(a1 + 48) )
        sub_2A6A80();
      v5 = *(_QWORD *)(a1 + 40) + 48 * v4;
      v6 = **(bool (__fastcall ***)(__int64))v5;
      if ( v6 == sub_2A5DE0 )
      {
        if ( *(_DWORD *)(v5 + 8) == *(_DWORD *)(v5 + 40) )
          goto LABEL_13;
        v7 = *(_QWORD *)(a1 + 72);
        v23 = v7;
        if ( v7 )
        {
LABEL_9:
          v8 = *(_DWORD *)(v7 + 104);
          a2 = (unsigned int)(v8 + 1);
          *(_DWORD *)(v7 + 104) = a2;
          v9 = *(_DWORD *)(v5 + 44);
          if ( v9 != -2 )
          {
LABEL_10:
            sub_139A80(&v23, a2);
            v10 = v9;
            if ( v9 == -1 )
              goto LABEL_13;
            goto LABEL_11;
          }
          v19 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 16LL);
          v24 = v7;
          *(_DWORD *)(v7 + 104) = v8 + 2;
LABEL_32:
          v22 = v5;
          a2 = (__int64)&v24;
          *(_DWORD *)(v5 + 44) = v19(v5, &v24);
          sub_139A80(&v24, (__int64)&v24);
          v9 = *(_DWORD *)(v22 + 44);
          goto LABEL_10;
        }
      }
      else
      {
        v21 = *(_QWORD *)(a1 + 40) + 48 * v4;
        v18 = v6(v5);
        v5 = v21;
        if ( !v18 )
          goto LABEL_13;
        v7 = *(_QWORD *)(a1 + 72);
        v23 = v7;
        if ( v7 )
          goto LABEL_9;
      }
      v9 = *(_DWORD *)(v5 + 44);
      if ( v9 != -2 )
        goto LABEL_10;
      v19 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 16LL);
      v24 = 0;
      goto LABEL_32;
    }
  }
  return -1;
}
