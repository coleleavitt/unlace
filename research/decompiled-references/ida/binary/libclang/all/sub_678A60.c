__int64 __fastcall sub_678A60(__int64 *a1, __int64 a2, double a3, __m128i a4, double a5, __m128 a6)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // r12
  unsigned int v11; // r12d
  __int64 v13; // rax
  __int64 *v14; // rdx
  __int64 *v15; // r13
  __int64 *v16; // rbx

  sub_659510(a1, a2);
  if ( (unsigned __int8)sub_673240(a1, *(_QWORD *)(a2 + 184), a3, a4, a5, a6) )
  {
    v6 = *(_QWORD *)(a2 + 160);
    if ( !v6 )
      goto LABEL_5;
    v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v6 & 4) != 0 )
    {
      if ( !v7 )
LABEL_5:
        BUG();
      v7 = *(_QWORD *)v7;
      v8 = *(unsigned int *)(v7 + 8);
    }
    else
    {
      v8 = *(unsigned int *)(v7 + 8);
    }
    if ( (_DWORD)v8 )
    {
      v9 = v7 + 16;
      v10 = v9 + 32 * v8;
      while ( (unsigned __int8)sub_674590(a1, v9, a3, a4, a5, a6) )
      {
        v9 += 32;
        if ( v9 == v10 )
          goto LABEL_13;
      }
    }
    else
    {
LABEL_13:
      if ( (unsigned __int8)sub_674AD0(a1, a2, a3, a4, a5, a6) )
      {
        v11 = sub_66F3A0(a1, a2 + 64, a3, a4, a5, a6);
        if ( (_BYTE)v11 )
        {
          v13 = sub_6434A0(a2);
          v15 = v14;
          v16 = (__int64 *)v13;
          if ( v14 == (__int64 *)v13 )
            return v11;
          while ( (unsigned __int8)sub_6777E0(a1, *v16, a3, a4, a5, a6) )
          {
            if ( v15 == ++v16 )
              return v11;
          }
        }
      }
    }
  }
  return 0;
}

