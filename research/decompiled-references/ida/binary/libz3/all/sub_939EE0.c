__int64 __fastcall sub_939EE0(__int64 a1, unsigned int *a2)
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
  __int64 v20; // r9
  __int64 v21; // rax
  unsigned int v22; // ebp
  _DWORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned int v26; // ebp
  char v27; // [rsp+1Fh] [rbp-79h] BYREF
  int v28[2]; // [rsp+20h] [rbp-78h] BYREF
  int v29[2]; // [rsp+28h] [rbp-70h]
  int v30[2]; // [rsp+30h] [rbp-68h]
  __int64 v31; // [rsp+38h] [rbp-60h]
  int v32[2]; // [rsp+40h] [rbp-58h] BYREF
  int v33[2]; // [rsp+48h] [rbp-50h]
  int v34[2]; // [rsp+50h] [rbp-48h]
  char v35[8]; // [rsp+58h] [rbp-40h]

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL);
  if ( !v3
    || (v4 = *a2, (unsigned int)v4 >= *(_DWORD *)(v3 - 4))
    || (v5 = *(_QWORD *)(v3 + 8 * v4)) == 0
    || (v6 = sub_B39350(*(_QWORD *)(v3 + 8 * v4), *(unsigned int *)(a1 + 8)), v6 == -1)
    || v5 != *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * v6) )
  {
    *(_QWORD *)v28 = 0;
    v7 = *((_WORD *)a2 + 2) == 0;
    *(_QWORD *)v29 = 0;
    *(_QWORD *)v30 = 1;
    v31 = 0;
    if ( v7 && (v18 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL)) != nullptr )
    {
      v8 = a1 + 144;
      if ( *v18 == 5 && v18[1] == 6 && a2[6] == 2 )
      {
        v19 = sub_1666AE0(v8, *((_QWORD *)a2 + 4), v28, &v27);
        v8 = a1 + 144;
        if ( v19 )
        {
          *(_QWORD *)v32 = 0;
          *(_QWORD *)v33 = 0;
          *(_QWORD *)v34 = 1;
          *(_QWORD *)v35 = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)v32, v28);
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 136) + 36LL) )
            sub_939EE0(a1, *((_QWORD *)a2 + 4));
          v16 = sub_939EE0(a1, *((_QWORD *)a2 + 5));
          if ( v16 != -1 )
          {
            v21 = sub_B68280(*(_QWORD *)(a1 + 16), a2, *(_BYTE *)(*(_QWORD *)(a1 + 136) + 36LL) ^ 1u, 0, 1, v20);
            v22 = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, v21);
            sub_9399C0(a1, v16, v22, v32, 0xFFFFFFFE);
            sub_1831620(qword_1C7F2C0, v32);
            sub_9399C0(a1, v22, v16, v32, 0xFFFFFFFE);
            v16 = v22;
          }
          goto LABEL_32;
        }
      }
    }
    else
    {
      v8 = a1 + 144;
    }
    if ( !(unsigned __int8)sub_1666AE0(v8, a2, v28, v32) )
    {
      if ( !*((_WORD *)a2 + 2) && (v23 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL)) != nullptr && *v23 == 5 )
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
    v24 = sub_B68280(*(_QWORD *)(a1 + 16), a2, 0, 0, 1, v9);
    v16 = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, v24);
    if ( !v28[0] )
    {
LABEL_17:
      sub_25A130((char *)v28);
      return v16;
    }
    v25 = sub_920DF0(a1, (__int64)a2);
    v26 = sub_939EE0(a1, v25);
    *(_QWORD *)v32 = 0;
    *(_QWORD *)v33 = 0;
    *(_QWORD *)v34 = 1;
    *(_QWORD *)v35 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v32, v28);
    sub_9399C0(a1, v26, v16, v32, 0xFFFFFFFE);
    sub_1831620(qword_1C7F2C0, v32);
    sub_9399C0(a1, v16, v26, v32, 0xFFFFFFFE);
LABEL_32:
    sub_25A130((char *)v32);
    goto LABEL_17;
  }
  return sub_B39350(v5, *(unsigned int *)(a1 + 8));
}

