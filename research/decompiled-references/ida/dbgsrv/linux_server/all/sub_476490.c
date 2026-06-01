/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_476490
// Address: 0x0000000000476490

//----- (0000000000476490) ----------------------------------------------------
__int64 __fastcall sub_476490(unsigned __int8 **a1)
{
  unsigned int v1; // ebp
  unsigned int v3; // eax
  unsigned __int8 *v4; // r12
  unsigned __int8 v5; // al
  unsigned __int8 v6; // al
  unsigned __int8 *v8; // r12
  unsigned int v9; // edi
  unsigned int v10; // edi
  unsigned __int8 *v11; // r14
  unsigned __int8 v12; // bp
  _BYTE v13[4]; // [rsp+0h] [rbp-38h] BYREF
  char v14; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int8 v15; // [rsp+5h] [rbp-33h]
  unsigned __int8 v16; // [rsp+6h] [rbp-32h]
  char v17; // [rsp+7h] [rbp-31h]
  unsigned __int64 v18; // [rsp+8h] [rbp-30h]

  v1 = 0;
  v18 = __readfsqword(0x28u);
  v3 = sub_4796E0(a1);
  if ( v3 != -1 )
  {
    v1 = 92;
    if ( v3 <= 0xFF )
    {
      v1 = v3;
      if ( (unsigned __int8)(v3 - 48) <= 7u )
      {
        v4 = *a1;
        v14 = v3;
        v5 = *v4;
        if ( (unsigned __int8)(*v4 - 48) <= 7u )
          ++v4;
        else
          v5 = 0;
        v15 = v5;
        v6 = *v4;
        if ( (unsigned __int8)(*v4 - 48) > 7u )
          v6 = 0;
        else
          ++v4;
        v16 = v6;
        v17 = 0;
        sub_485540(&v14, "%o", (unsigned int)v13);
        *a1 = v4;
        return v13[0];
      }
      else
      {
        switch ( (char)v3 )
        {
          case 'a':
            v1 = 7;
            break;
          case 'b':
            v1 = 8;
            break;
          case 'f':
            v1 = 12;
            break;
          case 'n':
            v1 = 10;
            break;
          case 'r':
            v1 = 13;
            break;
          case 't':
            v1 = 9;
            break;
          case 'v':
            v1 = 11;
            break;
          case 'x':
            v8 = *a1;
            v9 = (char)**a1;
            if ( v9 <= 0x7F && isxdigit(v9) )
            {
              v14 = v9;
              v10 = (char)v8[1];
              v11 = v8 + 1;
              v12 = v8[1];
              if ( v10 <= 0x7F && isxdigit(v10) )
                v11 = v8 + 2;
              else
                v12 = 0;
              v15 = v12;
              v16 = 0;
              sub_485540(&v14, "%x", (unsigned int)v13);
              *a1 = v11;
              v1 = v13[0];
            }
            break;
          default:
            return v1;
        }
      }
    }
  }
  return v1;
}
