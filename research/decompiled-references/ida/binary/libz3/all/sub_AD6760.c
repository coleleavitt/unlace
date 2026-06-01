void __fastcall sub_AD6760(char *a1, char *a2, __int64 a3)
{
  char *i; // r14
  char v4; // al
  _DWORD *v5; // rbx
  char *v6; // r13
  void *v7; // r12
  bool v8; // bp
  void *v9; // r15
  _DWORD *v10; // rbp
  char v11; // al
  int v12; // eax
  __int64 v13; // [rsp+10h] [rbp-C8h]
  char *v14; // [rsp+18h] [rbp-C0h]
  __int64 v15; // [rsp+48h] [rbp-90h] BYREF
  char v16; // [rsp+5Eh] [rbp-7Ah] BYREF
  char v17; // [rsp+5Fh] [rbp-79h] BYREF
  _QWORD v18[2]; // [rsp+60h] [rbp-78h] BYREF
  _QWORD v19[2]; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v20[2]; // [rsp+80h] [rbp-58h] BYREF
  _QWORD v21[9]; // [rsp+90h] [rbp-48h] BYREF

  v15 = a3;
  if ( a1 != a2 )
  {
    for ( i = a1 + 8; a2 != i; *(_QWORD *)a1 = v5 )
    {
      while ( 1 )
      {
        v4 = sub_AD65D0(&v15, *(_DWORD **)i, *(_DWORD **)a1);
        v5 = *(_DWORD **)i;
        if ( v4 )
          break;
        v6 = i;
        v13 = v15;
        while ( 1 )
        {
          v10 = *((_DWORD **)v6 - 1);
          v14 = v6;
          v18[0] = 0;
          v18[1] = 0;
          v19[0] = 1;
          v19[1] = 0;
          v20[0] = 0;
          v20[1] = 0;
          v21[0] = 1;
          v21[1] = 0;
          if ( (unsigned __int8)sub_1666AE0(v13, v5, v18, &v17) && (unsigned __int8)sub_1666AE0(v13, v10, v20, &v16) )
          {
            v7 = qword_1C7F2C0;
            if ( (v19[0] & 0x100000000LL) != 0
              || LODWORD(v19[0]) != 1
              || (v21[0] & 0x100000000LL) != 0
              || LODWORD(v21[0]) != 1 )
            {
              v11 = sub_1848D40(qword_1C7F2C0, v18, v20);
              v7 = qword_1C7F2C0;
              v8 = v11;
            }
            else if ( (v18[0] & 0x100000000LL) != 0 || (v20[0] & 0x100000000LL) != 0 )
            {
              v12 = sub_182C7B0(qword_1C7F2C0, v18, v20);
              v7 = qword_1C7F2C0;
              v8 = v12 < 0;
            }
            else
            {
              v8 = SLODWORD(v18[0]) < SLODWORD(v20[0]);
            }
          }
          else
          {
            v7 = qword_1C7F2C0;
            v8 = *v5 < *v10;
          }
          v6 -= 8;
          sub_182CBA0(v7, v20);
          sub_182CBA0(v7, v21);
          v9 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v18);
          sub_182CBA0(v9, v19);
          if ( !v8 )
            break;
          *((_QWORD *)v6 + 1) = *(_QWORD *)v6;
        }
        i += 8;
        *(_QWORD *)v14 = v5;
        if ( a2 == i )
          return;
      }
      if ( i - a1 <= 8 )
      {
        if ( i - a1 == 8 )
          *(_QWORD *)i = *(_QWORD *)a1;
      }
      else
      {
        memmove(a1 + 8, a1, i - a1);
      }
      i += 8;
    }
  }
}

