/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400333C0
// Address: 0x00000001400333C0

//----- (00000001400333C0) ----------------------------------------------------
__int64 __fastcall sub_1400333C0(_QWORD *a1, const char *a2, int *a3)
{
  int v3; // esi
  __int64 v6; // rbp
  unsigned __int64 v7; // rdi
  __int64 v8; // r12
  unsigned __int64 v9; // r15
  __int64 v10; // rbx
  const char *v11; // rcx

  v3 = 0;
  v6 = sub_140033510(a1 + 13, a2);
  if ( v6 == -1 )
  {
    v6 = sub_140033510(a1 + 16, a2);
    if ( v6 == -1 )
    {
      v7 = 0;
      v8 = a1[12];
      v9 = *(_QWORD *)(v8 + 96);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v8 + 88);
        while ( 1 )
        {
          v11 = Str1;
          if ( *(_QWORD *)(v10 + 8) )
            v11 = *(const char **)v10;
          if ( !strcmp(v11, a2) )
            break;
          ++v7;
          v10 += 56;
          if ( v7 >= v9 )
            goto LABEL_11;
        }
        v6 = v7;
        v3 = 3;
      }
      else
      {
LABEL_11:
        if ( sub_14002D380(v8, a2) )
        {
          v3 = 5;
        }
        else if ( (unsigned int)sub_14002CEB0((_QWORD *)a1[12], a2) == 0x7FFFFFFF )
        {
          if ( off_1400C60A0 && off_1400C60A0((__int64)a2) )
            v3 = 4;
        }
        else
        {
          v3 = 6;
        }
      }
    }
    else
    {
      v3 = 2;
    }
  }
  else
  {
    v3 = 1;
  }
  if ( a3 )
    *a3 = v3;
  return v6;
}
// 1400C60A0: using guessed type bool (__fastcall *off_1400C60A0)(__int64 a1);
