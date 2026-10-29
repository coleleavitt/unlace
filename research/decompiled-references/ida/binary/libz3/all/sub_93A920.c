__int64 __fastcall sub_93A920(__int64 a1, unsigned int *a2)
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
  int v20; // r15d
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // rax
  unsigned int v24; // ebp
  _DWORD *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int v28; // r15d
  int v29; // ebp
  char v30; // [rsp+17h] [rbp-61h] BYREF
  int v31; // [rsp+18h] [rbp-60h] BYREF
  int v32; // [rsp+1Ch] [rbp-5Ch]
  _QWORD v33[11]; // [rsp+20h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL);
  if ( !v3
    || (v4 = *a2, (unsigned int)v4 >= *(_DWORD *)(v3 - 4))
    || (v5 = *(_QWORD *)(v3 + 8 * v4)) == 0
    || (v6 = sub_B39350(*(_QWORD *)(v3 + 8 * v4), *(unsigned int *)(a1 + 8)), v6 == -1)
    || v5 != *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * v6) )
  {
    v33[0] = 0;
    v7 = *((_WORD *)a2 + 2) == 0;
    v33[1] = 0;
    v33[2] = 1;
    v33[3] = 0;
    if ( v7 && (v18 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL)) != nullptr )
    {
      v8 = a1 + 96;
      if ( *v18 == 5 && v18[1] == 6 && a2[6] == 2 )
      {
        v19 = sub_1666AE0(v8, *((_QWORD *)a2 + 4), v33, &v30);
        v8 = a1 + 96;
        if ( v19 )
        {
          v31 = sub_182D050(qword_1C7F2C0, v33);
          v20 = v31;
          v21 = *(_QWORD *)(a1 + 88);
          v32 = 0;
          if ( *(_BYTE *)(v21 + 36) )
            sub_93A920(a1, *((_QWORD *)a2 + 4));
          v16 = sub_93A920(a1, *((_QWORD *)a2 + 5));
          if ( v16 != -1 )
          {
            v23 = sub_B68280(*(_QWORD *)(a1 + 16), a2, *(_BYTE *)(*(_QWORD *)(a1 + 88) + 36LL) ^ 1u, 0, 1, v22);
            v24 = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, v23);
            sub_93A520(a1, v16, v24, (__int64)&v31, 0xFFFFFFFE);
            v31 = -v20;
            sub_93A520(a1, v24, v16, (__int64)&v31, 0xFFFFFFFE);
            v16 = v24;
          }
LABEL_17:
          sub_25A130((char *)v33);
          return v16;
        }
      }
    }
    else
    {
      v8 = a1 + 96;
    }
    if ( (unsigned __int8)sub_1666AE0(v8, a2, v33, &v31) )
    {
      v26 = sub_B68280(*(_QWORD *)(a1 + 16), a2, 0, 0, 1, v9);
      v16 = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, v26);
      if ( LODWORD(v33[0]) )
      {
        v27 = sub_921D30(a1, (__int64)a2);
        v28 = sub_93A920(a1, v27);
        v31 = sub_182D050(qword_1C7F2C0, v33);
        v29 = v31;
        v32 = 0;
        sub_93A520(a1, v28, v16, (__int64)&v31, 0xFFFFFFFE);
        v31 = -v29;
        sub_93A520(a1, v16, v28, (__int64)&v31, 0xFFFFFFFE);
      }
    }
    else if ( !*((_WORD *)a2 + 2) && (v25 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL)) != nullptr && *v25 == 5 )
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

