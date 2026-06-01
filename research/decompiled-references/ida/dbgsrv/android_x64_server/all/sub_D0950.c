/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D0950
// Address: 0x00000000000D0950

//----- (00000000000D0950) ----------------------------------------------------
unsigned __int64 __fastcall sub_D0950(char **a1, unsigned __int8 a2)
{
  char *v2; // r8
  unsigned __int64 result; // rax
  char *v4; // r9
  __int64 v5; // rcx
  char v6; // r10
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  char v10; // r10
  unsigned __int64 v11; // rdx
  __int64 v12; // rdx

  if ( a2 == 0xFF )
    return 0;
  v2 = *a1;
  switch ( a2 & 0xF )
  {
    case 0:
    case 4:
    case 0xC:
      result = *(_QWORD *)v2;
      v4 = v2 + 8;
      goto LABEL_21;
    case 1:
      v5 = 0;
      result = 0;
      v4 = *a1;
      do
      {
        v6 = *v4;
        v7 = (unsigned __int64)(*v4++ & 0x7F) << v5;
        result |= v7;
        v5 += 7;
      }
      while ( v6 < 0 );
      goto LABEL_21;
    case 2:
      result = *(unsigned __int16 *)v2;
      goto LABEL_18;
    case 3:
      result = *(unsigned int *)v2;
      goto LABEL_20;
    case 9:
      v8 = 0;
      v9 = 0;
      v4 = *a1;
      do
      {
        v10 = *v4;
        v11 = (unsigned __int64)(*v4++ & 0x7F) << v8;
        v9 |= v11;
        v8 += 7LL;
      }
      while ( v10 < 0 );
      v12 = -1LL << v8;
      if ( (v10 & 0x40) == 0 )
        v12 = 0;
      if ( v8 >= 0x40 )
        v12 = 0;
      result = v12 | v9;
      goto LABEL_21;
    case 0xA:
      result = *(__int16 *)v2;
LABEL_18:
      v4 = v2 + 2;
      goto LABEL_21;
    case 0xB:
      result = *(int *)v2;
LABEL_20:
      v4 = v2 + 4;
LABEL_21:
      if ( ((a2 >> 4) & 7) == 0 )
        goto LABEL_25;
      if ( ((a2 >> 4) & 7) != 1 )
LABEL_30:
        abort();
      if ( result )
      {
        result += (unsigned __int64)v2;
LABEL_25:
        if ( (a2 & 0x80u) != 0 )
        {
          if ( result )
            result = *(_QWORD *)result;
        }
      }
      else
      {
        result = 0;
      }
      *a1 = v4;
      break;
    default:
      goto LABEL_30;
  }
  return result;
}
