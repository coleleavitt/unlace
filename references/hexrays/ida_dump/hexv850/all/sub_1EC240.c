__int64 __fastcall sub_1EC240(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // ebp
  unsigned __int64 v4; // r13
  int v6; // r15d
  unsigned int v7; // r13d
  __int64 v8; // rax
  _DWORD *v9; // rbx
  __int64 v10; // rdi
  int v11; // edx
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned int v14; // [rsp+Ch] [rbp-8Ch]
  _QWORD v15[5]; // [rsp+10h] [rbp-88h] BYREF
  char v16; // [rsp+38h] [rbp-60h]
  __int64 v17; // [rsp+40h] [rbp-58h] BYREF
  __int128 v18; // [rsp+48h] [rbp-50h]
  unsigned __int64 v19; // [rsp+58h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 464);
  v2 = v1;
  if ( (_DWORD)v1 )
  {
    v4 = *(int *)(a1 + 440);
    memset(&v15[1], 0, 32);
    v16 = 0;
    v15[0] = off_4B2648;
    v17 = 0;
    v18 = 0;
    if ( v4 )
    {
      v17 = qvector_reserve(&v17, 0, v4, 4);
      v12 = v18;
      if ( (unsigned __int64)v18 < v4 )
      {
        *(_DWORD *)(v17 + 4 * v18) = 0;
        v13 = v12 + 1;
        if ( v13 < v4 )
        {
          do
            *(_DWORD *)(v17 + 4 * v13++) = 0;
          while ( v4 != v13 );
        }
      }
      *(_QWORD *)&v18 = v4;
    }
    sub_11AFF0(a1, (__int64)v15);
    v6 = 0;
    v7 = 0;
    if ( (int)v1 > 0 )
    {
      do
      {
        v8 = sub_1386C0((_QWORD *)a1, v6);
        v9 = (_DWORD *)v8;
        if ( (*(_BYTE *)(v8 + 24) & 2) == 0 )
        {
          v10 = *(_QWORD *)(v8 + 80);
          if ( (!(_BYTE)v10 || ((unsigned __int8)v10 & 0xFu) <= 9)
            && *(_DWORD *)(v8 + 88) == *(unsigned __int8 *)(*(_QWORD *)(a1 + 1496) + 130LL)
            && (get_tinfo_property(v10, 2) & 0xF) != 9 )
          {
            v11 = *(_DWORD *)(v17 + 4LL * (int)(-991146299 * (((__int64)v9 - *(_QWORD *)(a1 + 432)) >> 3)));
            if ( v11 )
            {
              if ( *(unsigned __int8 *)(*(_QWORD *)(a1 + 1496) + 130LL) > v11 )
              {
                v14 = *(_DWORD *)(v17 + 4LL * (int)(-991146299 * (((__int64)v9 - *(_QWORD *)(a1 + 432)) >> 3)));
                if ( sub_117EC0(v11) )
                  v7 += (unsigned __int8)sub_1EA1E0(v9, *(_QWORD **)(a1 + 1504), v14, *(_DWORD *)(a1 + 72), 2);
              }
            }
          }
        }
        ++v6;
      }
      while ( v2 != v6 );
    }
    v15[0] = off_4B2648;
    if ( v17 )
    {
      *(_QWORD *)&v18 = 0;
      qfree(v17);
    }
    return v7;
  }
  return v2;
}
