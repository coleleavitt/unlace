__int64 __fastcall sub_938B60(__int64 a1, unsigned int *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r12
  unsigned int v6; // eax
  bool v7; // zf
  __int64 v8; // rdi
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbp
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // r12d
  _DWORD *v18; // rax
  char v19; // al
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // r9
  __int64 v25; // rax
  unsigned int v26; // ebp
  _DWORD *v27; // rax
  __int64 v28; // rax
  int v29; // eax
  int v30; // edx
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  unsigned int v34; // r15d
  char v35; // [rsp+1Fh] [rbp-99h] BYREF
  int v36[2]; // [rsp+20h] [rbp-98h] BYREF
  int v37[2]; // [rsp+28h] [rbp-90h]
  int v38[2]; // [rsp+30h] [rbp-88h]
  __int64 v39; // [rsp+38h] [rbp-80h]
  char v40[32]; // [rsp+40h] [rbp-78h] BYREF
  char v41[88]; // [rsp+60h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL);
  if ( !v3
    || (v4 = *a2, (unsigned int)v4 >= *(_DWORD *)(v3 - 4))
    || (v5 = *(_QWORD *)(v3 + 8 * v4)) == 0
    || (v6 = sub_B39350(*(_QWORD *)(v3 + 8 * v4), *(unsigned int *)(a1 + 8)), v6 == -1)
    || v5 != *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * v6) )
  {
    *(_QWORD *)v36 = 0;
    v7 = *((_WORD *)a2 + 2) == 0;
    *(_QWORD *)v37 = 0;
    *(_QWORD *)v38 = 1;
    v39 = 0;
    if ( v7 && (v18 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL)) != nullptr )
    {
      v8 = a1 + 208;
      if ( *v18 == 5 && v18[1] == 6 && a2[6] == 2 )
      {
        v19 = sub_1666AE0(v8, *((_QWORD *)a2 + 4), v36, &v35);
        v8 = a1 + 208;
        if ( v19 )
        {
          sub_894960((__int64)v40, (__int64)v36);
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 200) + 36LL) )
            sub_938B60(a1, *((_QWORD *)a2 + 4), v20, v21, v22, v23);
          v16 = sub_938B60(a1, *((_QWORD *)a2 + 5), v20, v21, v22, v23);
          if ( v16 != -1 )
          {
            v25 = sub_B68280(*(_QWORD *)(a1 + 16), a2, *(_BYTE *)(*(_QWORD *)(a1 + 200) + 36LL) ^ 1u, 0, 1, v24);
            v26 = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, v25);
            sub_938550(a1, v16, v26, (__int64)v40, 0xFFFFFFFE);
            sub_91F5A0((__int64)v40);
            sub_938550(a1, v26, v16, (__int64)v40, 0xFFFFFFFE);
            v16 = v26;
          }
          sub_25A130(v41);
          sub_25A130(v40);
LABEL_17:
          sub_25A130((char *)v36);
          return v16;
        }
      }
    }
    else
    {
      v8 = a1 + 208;
    }
    if ( (unsigned __int8)sub_1666AE0(v8, a2, v36, v40) )
    {
      v28 = sub_B68280(*(_QWORD *)(a1 + 16), a2, 0, 0, 1, v9);
      v16 = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, v28);
      if ( v36[0] )
      {
        v29 = sub_91F690(a1, (__int64)a2);
        v34 = sub_938B60(a1, v29, v30, v31, v32, v33);
        sub_894960((__int64)v40, (__int64)v36);
        sub_938550(a1, v34, v16, (__int64)v40, 0xFFFFFFFE);
        sub_1831620(qword_1C7F2C0, v40);
        sub_1831620(qword_1C7F2C0, v41);
        sub_938550(a1, v16, v34, (__int64)v40, 0xFFFFFFFE);
        sub_25A130(v41);
        sub_25A130(v40);
      }
    }
    else if ( !*((_WORD *)a2 + 2) && (v27 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL)) != nullptr && *v27 == 5 )
    {
      v16 = -1;
    }
    else
    {
      v10 = *(_QWORD *)(a1 + 16);
      v11 = *(_QWORD *)(v10 + 8656);
      if ( !v11 || (v12 = *a2, (unsigned int)v12 >= *(_DWORD *)(v11 - 4)) || !*(_QWORD *)(v11 + 8 * v12) )
      {
        sub_B6F780(v10);
        v12 = *a2;
        v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL);
      }
      v13 = *(_QWORD *)(v11 + 8 * v12);
      v14 = sub_B39350(v13, *(unsigned int *)(a1 + 8));
      if ( v14 != -1 && v13 == *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * v14) )
        v15 = sub_B39350(v13, *(unsigned int *)(a1 + 8));
      else
        v15 = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, v13);
      v16 = v15;
    }
    goto LABEL_17;
  }
  return sub_B39350(v5, *(unsigned int *)(a1 + 8));
}

