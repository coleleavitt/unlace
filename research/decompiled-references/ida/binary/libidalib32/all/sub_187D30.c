__int64 __fastcall sub_187D30(__int64 a1, int a2, _DWORD *a3, __int64 a4, char a5)
{
  __int64 v9; // rax
  __int64 v10; // r15
  _QWORD *v11; // rbp
  int v12; // edi
  __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v17; // rax
  char *v18; // rax
  char v19; // [rsp+Fh] [rbp-49h] BYREF
  __int64 v20[9]; // [rsp+10h] [rbp-48h] BYREF

  v20[1] = __readfsqword(0x28u);
  v9 = sub_1843B0(a1, a2, &v19, v20);
  if ( !v9 )
    return 0;
  v10 = v20[0];
  v11 = (_QWORD *)v9;
  v12 = *(char *)(v20[0] + 52);
  if ( *(_BYTE *)(v20[0] + 52) != 32 )
  {
    if ( (unsigned __int8)(v12 - 65) <= 0x27u && (v13 = 0xA000880021LL, _bittest64(&v13, (unsigned int)(v12 - 65))) )
    {
      if ( a5 )
      {
        if ( a4 )
        {
LABEL_7:
          v14 = (unsigned int)(v12 - 68);
          if ( (unsigned __int8)v14 <= 0x2Au )
          {
            v15 = 0x60000200E11LL;
            if ( _bittest64(&v15, v14) )
            {
              if ( *(_DWORD *)(v10 + 48) == 1 )
                *a3 = **(_DWORD **)(v10 + 32);
            }
          }
          return sub_187860(*(_QWORD *)(a1 + 8), v11, v19, (__int64)a3, a4, v10, *(_BYTE *)(a1 + 40) ^ 1u);
        }
        return 0;
      }
    }
    else if ( !a5 )
    {
      v17 = sub_1842A0(v20[0]);
      v12 = *(unsigned __int8 *)(v10 + 52);
      a4 = v17;
      goto LABEL_7;
    }
    goto LABEL_15;
  }
  if ( !a5 )
  {
LABEL_15:
    v18 = sub_184530(v12);
    sub_92120(
      (__int64)"Bad 'get' method for the field with id %d. You should use the get_%s_value() method",
      *(_DWORD *)(v10 + 56),
      v18);
    return 0;
  }
  if ( a4 )
    return sub_187860(*(_QWORD *)(a1 + 8), v11, v19, (__int64)a3, a4, v10, *(_BYTE *)(a1 + 40) ^ 1u);
  return 0;
}

