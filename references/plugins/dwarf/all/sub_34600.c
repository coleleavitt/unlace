unsigned __int64 __fastcall sub_34600(__int64 a1)
{
  __int64 v1; // rdx
  int v2; // esi
  __int64 v4; // rbx
  __int64 v5; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 *v10; // rax
  __int64 *v11; // rcx
  _QWORD *v12; // rsi
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // [rsp+0h] [rbp-38h] BYREF
  __int128 v16; // [rsp+8h] [rbp-30h]
  unsigned __int64 v17; // [rsp+18h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 88);
  if ( v1 )
  {
    v2 = *(_DWORD *)(a1 + 136);
    v4 = *(_QWORD *)(a1 + 88);
    if ( *(_QWORD *)(v1 + 48) <= 1u
      && (v7 = *(unsigned __int16 *)(v1 + 140), (unsigned __int16)v7 <= 0x17u)
      && ((v8 = 8912900, _bittest64(&v8, v7)) || (_WORD)v7 == 4)
      && (v5 = *(_QWORD *)(a1 + 80),
          v9 = *(_QWORD *)(*(_QWORD *)(v5 + 144) + 144LL),
          v10 = *(__int64 **)(v9 + 120),
          v11 = &v10[*(_QWORD *)(v9 + 128)],
          v10 != v11) )
    {
      while ( 1 )
      {
        v4 = *v10;
        if ( v1 == *(_QWORD *)(*v10 + 88) )
        {
          if ( *(_QWORD *)(v4 + 64) )
            break;
        }
        if ( v11 == ++v10 )
        {
          if ( v2 )
            return v17 - __readfsqword(0x28u);
          v4 = v1;
          goto LABEL_5;
        }
      }
      *(_QWORD *)(a1 + 88) = v4;
      if ( !v2 && v4 )
        goto LABEL_5;
    }
    else if ( !v2 )
    {
      v5 = *(_QWORD *)(a1 + 80);
LABEL_5:
      if ( *(_DWORD *)(*(_QWORD *)(v5 + 152) + 124LL) == 6 )
      {
        v15 = 0;
        v12 = nullptr;
        v16 = 0;
        do
        {
          if ( *(_WORD *)(v4 + 140) != 22 )
            goto LABEL_26;
          v13 = &v12[v16];
          if ( v13 != v12 )
          {
            v14 = v12;
            while ( v4 != *v14 )
            {
              if ( v13 == ++v14 )
                goto LABEL_30;
            }
            if ( v13 != v14 )
            {
LABEL_26:
              if ( v12 )
              {
                *(_QWORD *)&v16 = 0;
                qfree(v12);
              }
              if ( *(_WORD *)(v4 + 140) == 31 )
              {
                sub_345A0(a1, *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 152LL) + 40LL));
                *(_OWORD *)(a1 + 152) = 0;
              }
              return v17 - __readfsqword(0x28u);
            }
          }
LABEL_30:
          if ( *((_QWORD *)&v16 + 1) < (unsigned __int64)(v16 + 1) )
          {
            v15 = qvector_reserve(&v15, v12, v16 + 1, 8);
            v13 = (_QWORD *)(v15 + 8 * v16);
          }
          *v13 = v4;
          v12 = (_QWORD *)v15;
          *(_QWORD *)&v16 = v16 + 1;
          if ( (unsigned __int64)v16 > 6 )
            goto LABEL_26;
          v4 = *(_QWORD *)(v4 + 88);
        }
        while ( v4 );
        if ( v15 )
        {
          *(_QWORD *)&v16 = 0;
          qfree(v15);
        }
      }
    }
  }
  return v17 - __readfsqword(0x28u);
}
