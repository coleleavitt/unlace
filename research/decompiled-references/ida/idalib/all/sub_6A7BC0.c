unsigned __int64 __fastcall sub_6A7BC0(void (*a1)(const char *, ...), const char *a2, _BYTE *a3)
{
  int v4; // ebx
  _BYTE *v5; // rdx
  _BYTE *v6; // rdi
  _DWORD *v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rcx
  _BYTE *v10; // rdx
  unsigned int v11; // eax
  _BYTE *v13; // [rsp+8h] [rbp-450h] BYREF
  _BYTE v14[1032]; // [rsp+10h] [rbp-448h] BYREF
  unsigned __int64 v15; // [rsp+418h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  if ( a3 )
  {
    v13 = a3;
    a1("// %s: ", a2);
    if ( *v13 )
    {
      v4 = 0;
      while ( 1 )
      {
        v11 = sub_6B3760(&v13);
        if ( v11 > 0x3FF )
          break;
        v5 = v13;
        v6 = v14;
        v7 = v13;
        if ( v11 >= 8 )
        {
          v8 = v11 >> 3;
          qmemcpy(v14, v13, 8 * v8);
          v7 += 2 * v8;
          v6 = &v14[8 * v8];
        }
        v9 = 0;
        if ( (v11 & 4) != 0 )
        {
          *(_DWORD *)v6 = *v7;
          v9 = 4;
        }
        if ( (v11 & 2) != 0 )
        {
          *(_WORD *)&v6[v9] = *(_WORD *)((char *)v7 + v9);
          v9 += 2;
        }
        if ( (v11 & 1) != 0 )
          v6[v9] = *((_BYTE *)v7 + v9);
        v10 = &v5[v11];
        v14[v11] = 0;
        v13 = v10;
        if ( v4 )
          a1(",", v7, v10, v9);
        ++v4;
        a1("%s", v14, v10, v9);
        if ( !*v13 )
          goto LABEL_18;
      }
      a1("\tGET_DT ERROR\n");
    }
    else
    {
LABEL_18:
      a1("\n");
    }
  }
  return v15 - __readfsqword(0x28u);
}
