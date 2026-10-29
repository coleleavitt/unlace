__int64 __fastcall sub_95A70(
        const char *a1,
        char *a2,
        char a3,
        unsigned __int8 (__fastcall *a4)(__int64, __int64, __int64),
        __int64 a5)
{
  FILE *v7; // rax
  FILE *v8; // rbp
  FILE *v9; // r12
  __int64 v10; // r15
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v14; // r12d
  __int64 v15; // [rsp+8h] [rbp-1060h]
  __int64 v17; // [rsp+18h] [rbp-1050h]
  _BYTE ptr[4104]; // [rsp+20h] [rbp-1048h] BYREF
  unsigned __int64 v19; // [rsp+1028h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v7 = sub_938E0(a1);
  if ( v7 )
  {
    v8 = v7;
    if ( sub_955B0(a2) && !a3 )
    {
      return (unsigned int)-3;
    }
    else
    {
      v9 = sub_93940(a2);
      if ( v9 )
      {
        sub_95990(v8, 0, 2);
        v17 = sub_95930(v8);
        sub_95990(v8, 0, 0);
        v15 = 0;
        while ( 1 )
        {
          v11 = sub_95810(v8, ptr, 4096);
          if ( v11 <= 0 )
          {
            v12 = 0;
            sub_959E0(v9);
            goto LABEL_10;
          }
          v10 = v11;
          if ( v11 != sub_958B0(v9, ptr, v11) )
          {
            v12 = -4;
            goto LABEL_13;
          }
          if ( a4 )
          {
            v15 += v10;
            if ( !a4(v15, v17, a5) )
              break;
          }
        }
        v12 = -5;
LABEL_13:
        sub_959E0(v9);
        v14 = sub_8F840();
        sub_95A30(a2);
        sub_8F860(v14);
LABEL_10:
        sub_959E0(v8);
      }
      else
      {
        v12 = -2;
        sub_959E0(v8);
      }
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return v12;
}

