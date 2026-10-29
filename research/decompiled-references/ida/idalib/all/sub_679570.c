__int64 __fastcall sub_679570(_QWORD *a1, __int64 a2, __int16 a3, int *a4, int a5, int a6)
{
  __int64 byter; // rbx
  int v8; // r14d
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rax
  char v11; // al
  void *v12; // rdi
  int v13; // r13d
  char *v14; // rdi
  int v15; // eax
  int v16; // eax
  char *v17; // rax
  unsigned __int64 v19; // rax
  int v20; // [rsp+14h] [rbp-84h]
  unsigned __int64 v21; // [rsp+18h] [rbp-80h]
  char *v23; // [rsp+38h] [rbp-60h] BYREF
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __int128 v25; // [rsp+48h] [rbp-50h]
  unsigned __int64 v26; // [rsp+58h] [rbp-40h]

  byter = a2;
  v26 = __readfsqword(0x28u);
  v20 = a3 & 0x20;
  v8 = a3 & 1;
  v9 = (-(__int64)(v8 == 0) & 0xFFFFFFFFFFFE0000LL) + 0x10000;
  v21 = v9 + a2;
  if ( (a3 & 0x800) != 0 )
    callui(9, 0, (int)&v23, (int)&ptr, (int)&callui, a6);
  if ( (a3 & 0x10) == 0 )
    callui(25, a2, (int)&callui, (int)a4, a5, a6);
  while ( 1 )
  {
    while ( !v8 )
    {
      v19 = sub_3C2650(a1, byter);
      byter = v19;
      if ( v19 == -1 )
        return -1;
      if ( v20 )
      {
        if ( (unsigned __int8)sub_3C0260(a1, v19) )
          goto LABEL_10;
LABEL_29:
        if ( !byter )
          return -1;
LABEL_30:
        byter = find_byter(0, byter - 1, 0, 4);
        goto LABEL_31;
      }
      if ( v21 >= v19 )
        goto LABEL_42;
      if ( !(unsigned __int8)sub_3C0260(a1, v19) )
        goto LABEL_30;
LABEL_10:
      ptr = nullptr;
      v25 = 0;
      v11 = generate_disasm_line(&ptr, byter, 2);
      v12 = ptr;
      if ( v11 && (unsigned __int64)v25 > 1 )
      {
        v23 = (char *)ptr;
        v13 = -1;
        while ( (unsigned int)get_utf8_char(&v23) - 1 <= 0xFFFFFFFD )
        {
          v14 = v23;
          if ( *v23 != 1 )
            goto LABEL_18;
          v15 = v23[1];
          if ( v23[1] == 18 )
          {
LABEL_21:
            if ( a4 )
              *a4 = v13;
            if ( ptr )
            {
              *(_QWORD *)&v25 = 0;
              qfree(ptr);
            }
            return byter;
          }
LABEL_16:
          v16 = v15 - 41;
          if ( (unsigned __int8)v16 < 8u )
            v13 = v16;
LABEL_18:
          while ( 1 )
          {
            v17 = tag_skipcode(v14);
            v14 = v17;
            if ( v23 == v17 )
              break;
            v23 = v17;
            if ( *v17 == 1 )
            {
              v15 = v17[1];
              if ( v14[1] != 18 )
                goto LABEL_16;
              goto LABEL_21;
            }
          }
        }
        v12 = ptr;
        if ( !ptr )
          continue;
LABEL_41:
        *(_QWORD *)&v25 = 0;
        qfree(v12);
      }
      else if ( ptr )
      {
        goto LABEL_41;
      }
    }
    v10 = sub_3C2450(a1, byter);
    byter = v10;
    if ( v10 == -1 )
      return -1;
    if ( v20 )
    {
      if ( (unsigned __int8)sub_3C0260(a1, v10) )
        goto LABEL_10;
      goto LABEL_37;
    }
    if ( v10 < v21 )
    {
      if ( (unsigned __int8)sub_3C0260(a1, v10) )
        goto LABEL_10;
      goto LABEL_37;
    }
LABEL_42:
    show_auto(byter, 0);
    v21 += v9;
    if ( (unsigned __int8)sub_3C0260(a1, byter) )
      goto LABEL_10;
    if ( !v8 )
      goto LABEL_29;
LABEL_37:
    byter = find_byte(byter + 1, ~(byter + 1), 0, 4);
LABEL_31:
    if ( byter == -1 )
      return -1;
    if ( (sub_3BE900(a1, byter, 4) & 0x600) != 0x200 )
      goto LABEL_10;
  }
}
