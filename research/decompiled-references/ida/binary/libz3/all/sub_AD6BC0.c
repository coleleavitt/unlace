void __fastcall sub_AD6BC0(char *a1, char *a2, __int64 a3)
{
  char *i; // r13
  char v4; // al
  _DWORD *v5; // rbx
  char *v6; // r14
  void *v7; // r12
  bool v8; // bp
  void *v9; // r15
  _DWORD *v10; // rbp
  char v11; // al
  int v12; // eax
  __int64 v13; // [rsp+18h] [rbp-B0h]
  char *v14; // [rsp+20h] [rbp-A8h]
  __int64 v15; // [rsp+48h] [rbp-80h] BYREF
  _QWORD v16[2]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v17[2]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD v18[2]; // [rsp+70h] [rbp-58h] BYREF
  _QWORD v19[9]; // [rsp+80h] [rbp-48h] BYREF

  v15 = a3;
  if ( a1 != a2 )
  {
    for ( i = a1 + 8; a2 != i; *(_QWORD *)a1 = v5 )
    {
      while ( 1 )
      {
        v4 = sub_AD6A30(&v15, *(_DWORD **)i, *(_DWORD **)a1);
        v5 = *(_DWORD **)i;
        if ( v4 )
          break;
        v6 = i;
        v13 = v15;
        while ( 1 )
        {
          v14 = v6;
          v16[0] = 0;
          v10 = *((_DWORD **)v6 - 1);
          v16[1] = 0;
          v17[0] = 1;
          v17[1] = 0;
          v18[0] = 0;
          v18[1] = 0;
          v19[0] = 1;
          v19[1] = 0;
          if ( (unsigned __int8)sub_1673C40(v13, v5, v16) && (unsigned __int8)sub_1673C40(v13, v10, v18) )
          {
            v7 = qword_1C7F2C0;
            if ( (v17[0] & 0x100000000LL) != 0
              || LODWORD(v17[0]) != 1
              || (v19[0] & 0x100000000LL) != 0
              || LODWORD(v19[0]) != 1 )
            {
              v11 = sub_1848D40(qword_1C7F2C0, v16, v18);
              v7 = qword_1C7F2C0;
              v8 = v11;
            }
            else if ( (v16[0] & 0x100000000LL) != 0 || (v18[0] & 0x100000000LL) != 0 )
            {
              v12 = sub_182C7B0(qword_1C7F2C0, v16, v18);
              v7 = qword_1C7F2C0;
              v8 = v12 < 0;
            }
            else
            {
              v8 = SLODWORD(v16[0]) < SLODWORD(v18[0]);
            }
          }
          else
          {
            v7 = qword_1C7F2C0;
            v8 = *v5 < *v10;
          }
          v6 -= 8;
          sub_182CBA0(v7, v18);
          sub_182CBA0(v7, v19);
          v9 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v16);
          sub_182CBA0(v9, v17);
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

