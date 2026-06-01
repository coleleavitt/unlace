__int64 __fastcall sub_38D2C0(__int64 a1)
{
  __int64 v2; // rbp
  __int64 *v3; // rbx
  __int64 *v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rsi
  bool v8; // zf
  __int64 *v9; // rax
  __int64 result; // rax
  void (__fastcall ***v11)(_QWORD); // rbx
  void *v12; // rdi
  void *v13; // rdi

  v2 = *(unsigned int *)(a1 + 24);
  v3 = *(__int64 **)(a1 + 16);
  *(_QWORD *)a1 = &off_1C4DD50;
  v4 = &v3[2 * v2];
  if ( v3 != v4 )
  {
    while ( (unsigned __int64)*v3 <= 1 )
    {
      v3 += 2;
      if ( v4 == v3 )
        goto LABEL_18;
    }
    if ( v4 != v3 )
    {
      v5 = *v3;
      v6 = *(_QWORD *)(a1 + 8);
      if ( *v3 )
        goto LABEL_16;
      while ( 1 )
      {
        v7 = v3[1];
        if ( v7 )
        {
          v8 = (*(_DWORD *)(v7 + 8))-- == 1;
          if ( v8 )
            sub_15D7BC0(v6, v7);
        }
        v9 = v3 + 2;
        if ( v4 == v3 + 2 )
          break;
        while ( 1 )
        {
          v5 = *v9;
          v3 = v9;
          if ( (unsigned __int64)*v9 > 1 )
            break;
          v9 += 2;
          if ( v4 == v9 )
            goto LABEL_18;
        }
        if ( v4 == v9 )
          break;
        v6 = *(_QWORD *)(a1 + 8);
LABEL_16:
        v8 = (*(_DWORD *)(v5 + 8))-- == 1;
        if ( v8 )
        {
          sub_15D7BC0(v6, v5);
          v6 = *(_QWORD *)(a1 + 8);
        }
      }
    }
  }
LABEL_18:
  result = sub_1695230(a1 + 72);
  v11 = *(void (__fastcall ****)(_QWORD))(a1 + 64);
  if ( v11 )
  {
    (**v11)(*(_QWORD *)(a1 + 64));
    result = sub_186B220(v11);
  }
  v12 = *(void **)(a1 + 40);
  if ( v12 )
    result = sub_186B220(v12);
  v13 = *(void **)(a1 + 16);
  if ( v13 )
    return sub_186B220(v13);
  return result;
}

