unsigned __int64 __fastcall sub_792B80(char *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r13d
  unsigned int v4; // r14d
  int v5; // r15d
  char v6; // al
  char v7; // bl
  char v8; // r15
  unsigned int v9; // esi
  int v10; // edx
  int v11; // r9d
  int v12; // eax
  int v13; // ecx
  unsigned int v14; // eax
  unsigned int v16; // [rsp+0h] [rbp-48h] BYREF
  int v17; // [rsp+4h] [rbp-44h] BYREF
  int v18[2]; // [rsp+8h] [rbp-40h]

  *(_QWORD *)v18 = __readfsqword(0x28u);
  v3 = a2;
  if ( a3 )
  {
    v4 = a3;
    if ( a3 != a2 )
    {
      if ( a2 >= a3 )
      {
        if ( !under_debugger )
          interr(3073);
        goto LABEL_25;
      }
      v5 = a3 - 1;
LABEL_5:
      v16 = a2;
      v6 = sub_796360(a1, &v16);
      v17 = v5;
      v7 = v6;
      v8 = sub_7962E0(a1, &v17);
      while ( 1 )
      {
        v9 = v4;
        v10 = 1;
        while ( 1 )
        {
          v11 = v10 - 1;
          v12 = 1 << (8 * v10);
          v13 = v12 - 1;
          if ( v7 )
          {
            if ( v16 >= (v3 & -v12) )
              break;
          }
          if ( (v3 | v13) >= v17 )
            break;
          v14 = v9 & -v12;
          if ( v16 >= v14 )
            break;
          if ( v8 && (v9 | v13) >= v17 )
            v9 = v14;
          if ( ++v10 == 4 )
          {
            v11 = 3;
            break;
          }
        }
        if ( v4 < v9 )
          break;
        v3 = sub_792930(a1, v3, v9, v11);
        if ( v3 >= v4 )
          return *(_QWORD *)v18 - __readfsqword(0x28u);
      }
      if ( !under_debugger )
        interr(2816);
LABEL_25:
      BUG();
    }
  }
  else
  {
    v17 = -1;
    v5 = -2;
    v4 = -1;
    sub_7916C0((__int64 *)a1, (unsigned int *)&v17);
    if ( a2 != -1 )
      goto LABEL_5;
  }
  return *(_QWORD *)v18 - __readfsqword(0x28u);
}

