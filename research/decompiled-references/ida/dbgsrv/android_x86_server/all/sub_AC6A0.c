/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AC6A0
// Address: 0x000AC6A0

//----- (000AC6A0) --------------------------------------------------------
int __cdecl sub_AC6A0(int a1, __int64 a2, void *dest, int a4)
{
  __int64 v4; // rdi
  unsigned int v5; // ecx
  __int64 v6; // rax
  int v7; // ecx
  int v8; // eax
  int v10; // [esp+4h] [ebp-18h]

  LODWORD(v4) = a1;
  if ( a2 == *(_QWORD *)(a1 + 32) )
  {
    HIDWORD(v4) = dest;
    v5 = *(_DWORD *)(a1 + 28);
    if ( v5 >= *(_DWORD *)(a1 + 20) )
    {
LABEL_22:
      HIDWORD(v4) -= dest;
      *(_QWORD *)(v4 + 32) += HIDWORD(v4);
      return HIDWORD(v4);
    }
    else
    {
      v6 = *(_QWORD *)(a1 + 40);
      HIDWORD(v4) = dest;
      while ( 1 )
      {
        LODWORD(v4) = *(_DWORD *)(*(_DWORD *)(v4 + 16) + 4 * v5);
        if ( (_DWORD)v4 )
        {
          if ( *(int *)v4 < 2 )
          {
            v10 = -1;
            v7 = qfseek(*(FILE **)(v4 + 4), v6, SHIDWORD(v6), 0);
            v6 = -1;
            if ( !v7 )
              LODWORD(v6) = qftell(*(FILE **)(v4 + 4));
          }
          else
          {
            v10 = -1;
            *(_QWORD *)(v4 + 16) = v6;
          }
        }
        else
        {
          v10 = -1;
          v6 = -1;
        }
        if ( *(_QWORD *)(a1 + 40) != v6 )
          break;
        if ( !(_DWORD)v4
          || (*(int *)v4 < 2 ? (v8 = qfread(*(FILE **)(v4 + 4), (void *)HIDWORD(v4), a4)) : (v8 = sub_AB320(v4, a4)),
              v8 == -1) )
        {
          v8 = 0;
        }
        HIDWORD(v4) += v8;
        a4 -= v8;
        if ( !a4 )
        {
          LODWORD(v4) = a1;
          *(_QWORD *)(a1 + 40) += (unsigned int)v8;
          goto LABEL_22;
        }
        LODWORD(v4) = a1;
        v5 = *(_DWORD *)(a1 + 28) + 1;
        *(_DWORD *)(a1 + 28) = v5;
        *(_DWORD *)(a1 + 44) = 0;
        *(_DWORD *)(a1 + 40) = 0;
        v6 = 0;
        if ( v5 >= *(_DWORD *)(a1 + 20) )
          goto LABEL_22;
      }
    }
  }
  else
  {
    set_qerrno(3);
    return -1;
  }
  return v10;
}
// AC77B: variable 'v6' is possibly undefined
