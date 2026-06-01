__int64 __fastcall sub_6C7B40(_QWORD *a1, int a2, unsigned int a3, unsigned int a4, __int64 *a5, _QWORD *a6)
{
  int v6; // r10d
  unsigned __int8 *v10; // r11
  unsigned int v11; // edx
  unsigned int v12; // ebx
  unsigned int v13; // ebp
  int v14; // ecx
  __int64 v15; // rax
  _QWORD *v17; // rdx
  unsigned int v18; // esi
  unsigned int v19; // esi
  __int64 *v20; // rdx

  v10 = (unsigned __int8 *)a1[2161];
  v11 = a4;
  v12 = v10[14];
  v13 = v10[12];
  if ( a3 )
  {
    LOBYTE(a4) = a4 <= 7;
    v14 = a2 & a4;
    if ( ((a3 <= 8) & (unsigned __int8)v14) != 0 )
    {
      v13 = 8;
      a4 = 0;
      *a5 = a1[2318];
    }
    else
    {
      LOBYTE(v14) = v13 >= a3;
      LOBYTE(v6) = v11 < v13;
      a4 = v6 & v14;
      LOBYTE(a4) = a2 & a4;
      if ( (_BYTE)a4 )
      {
        a4 = 0;
        *a5 = a1[2319];
      }
      else
      {
        if ( v11 < v12 && v12 >= a3 )
        {
          *a5 = a1[2320];
          goto LABEL_22;
        }
        v13 = v10[30];
        if ( v13 < a3 || v11 >= v13 )
        {
          v13 = v10[32];
          LOBYTE(a4) = v13 < a3;
          LOBYTE(v11) = v11 >= v13;
          a4 |= v11;
          *a5 = a1[2322];
        }
        else
        {
          *a5 = a1[2321];
        }
      }
    }
    if ( v12 < v13 )
    {
      v15 = *a5;
LABEL_10:
      *a6 = v15;
      return a4;
    }
LABEL_22:
    v15 = a1[2320];
    goto LABEL_10;
  }
  if ( a4 > 8 || !(_BYTE)a2 )
  {
    LOBYTE(a4) = a2 & (v13 >= a4);
    if ( ((unsigned __int8)a2 & (v13 >= v11)) != 0 )
    {
      *a5 = a1[2325];
      *a6 = a1[2320];
      return 0;
    }
    if ( v12 >= v11 )
    {
      *a5 = a1[2326];
      if ( v11 == v12 || (v17 = a1 + 2320, (*(_BYTE *)(a1[270] + 1LL) & 8) == 0) )
        v17 = a1 + 2326;
LABEL_20:
      *a6 = *v17;
      return 0;
    }
    v18 = v10[30];
    if ( v18 >= v11 )
    {
      *a5 = a1[2327];
      if ( v11 == v18 || (v17 = a1 + 2321, (*(_BYTE *)(a1[270] + 1LL) & 8) == 0) )
        v17 = a1 + 2327;
      goto LABEL_20;
    }
    v19 = v10[32];
    *a5 = a1[2328];
    if ( v19 >= v11 )
    {
      if ( v11 == v19 )
        goto LABEL_31;
    }
    else
    {
      a4 = 1;
    }
    v20 = a1 + 2322;
    if ( (*(_BYTE *)(a1[270] + 1LL) & 8) != 0 )
    {
LABEL_32:
      v15 = *v20;
      goto LABEL_10;
    }
LABEL_31:
    v20 = a1 + 2328;
    goto LABEL_32;
  }
  *a5 = a1[2324];
  *a6 = a1[2320];
  return 0;
}

