/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003EE50
// Address: 0x000000014003EE50

//----- (000000014003EE50) ----------------------------------------------------
__int64 __fastcall sub_14003EE50(const void *a1, __int64 a2, unsigned __int8 *a3)
{
  unsigned __int64 v5; // r15
  int v6; // edi
  __int64 v7; // rbx
  size_t v8; // r14
  void *v9; // rax
  size_t v10; // rdx
  unsigned __int8 *v11; // rcx
  unsigned __int64 v12; // r12
  char v13; // r13
  char v14; // r14
  int v15; // eax
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  bool v18; // r15
  int v19; // eax
  int v20; // eax
  unsigned __int64 v21; // rdi
  __int64 v22; // rcx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  __int64 v26; // rdi
  int v28; // eax
  int v29; // eax
  void *Block; // [rsp+20h] [rbp-20h] BYREF
  size_t v31; // [rsp+28h] [rbp-18h]
  __int64 v32; // [rsp+30h] [rbp-10h]
  unsigned __int8 *v34; // [rsp+90h] [rbp+50h] BYREF

  v5 = (unsigned __int64)a1;
  if ( !a3 )
    return 0;
  v34 = a3;
  v6 = sub_1400615C0(&v34);
  if ( !v6 )
    return 0;
  v7 = 0;
  v8 = a2 - v5;
  v9 = nullptr;
  Block = nullptr;
  v10 = 0;
  v31 = 0;
  v32 = 0;
  if ( v8 )
  {
    if ( v8 != -1 )
    {
      v9 = sub_14005ABE0((__int64)&Block, nullptr, v8 + 1, 1u);
      Block = v9;
    }
    v31 = v8 + 1;
    v5 = (unsigned __int64)a1;
    memcpy(v9, a1, v8);
    *((_BYTE *)Block + v8) = 0;
    v10 = v31;
    v9 = Block;
  }
  v11 = (unsigned __int8 *)Str1;
  if ( v10 )
    v11 = (unsigned __int8 *)v9;
  v12 = sub_140061980(v11) + 1;
  v13 = 0;
  v14 = 0;
  if ( (unsigned int)(v6 - 48) > 9 )
  {
    if ( ((v6 - 43) & 0xFFFFFFFD) != 0 )
      goto LABEL_17;
    if ( a3 != (unsigned __int8 *)v5 )
    {
      v34 = a3;
      if ( !v5 )
      {
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(1834);
      }
      sub_1400618A0(nullptr, (unsigned __int64 *)&v34, v5);
      v15 = sub_1400615C0(&v34);
      if ( (unsigned int)(v15 - 97) <= 0x19
        || (unsigned int)(v15 - 65) <= 0x19
        || (unsigned int)(v15 - 48) <= 9
        || v15 == 46 )
      {
LABEL_17:
        v16 = (unsigned int)(v6 - 46);
        if ( (unsigned int)v16 > 0x37 )
          goto LABEL_52;
        v17 = 0x80000000800001LL;
        if ( !_bittest64(&v17, v16) )
          goto LABEL_52;
      }
    }
  }
  v18 = v6 == 46;
  v7 = 1;
  v34 = a3;
  sub_140061BD0(&v34, 1);
  v19 = sub_1400615C0(&v34);
  if ( v6 == 48 )
  {
    if ( ((v19 - 88) & 0xFFFFFFDF) != 0 )
      goto LABEL_33;
    v34 = a3;
    v7 = 2;
    sub_140061BD0(&v34, 2);
    v20 = sub_1400615C0(&v34);
    if ( (unsigned int)(v20 - 97) <= 0x19
      || (unsigned int)(v20 - 65) <= 0x19
      || (unsigned int)(v20 - 48) <= 9
      || v20 == 46 )
    {
      v13 = 1;
      goto LABEL_33;
    }
LABEL_77:
    v26 = 0;
    goto LABEL_53;
  }
  v21 = (unsigned int)(v6 - 43);
  if ( (unsigned int)v21 <= 0x3A )
  {
    v22 = 0x400000004000005LL;
    if ( _bittest64(&v22, v21) )
    {
      if ( v12 <= 1 )
        goto LABEL_77;
      v34 = a3;
      sub_140061BD0(&v34, 1);
      v23 = sub_1400615C0(&v34);
      if ( (unsigned int)(v23 - 97) > 0x19 && (unsigned int)(v23 - 65) > 0x19 && (unsigned int)(v23 - 48) > 9 )
      {
        if ( v23 != 46 )
          goto LABEL_77;
        goto LABEL_33;
      }
      while ( 1 )
      {
LABEL_34:
        v34 = a3;
        if ( v7 <= 0 )
        {
          if ( v7 < 0 )
          {
            if ( byte_1400CB61C )
              __debugbreak();
            sub_14005A480(1834);
          }
        }
        else
        {
          sub_140061BD0(&v34, v7);
        }
        v24 = sub_1400615C0(&v34);
        if ( (unsigned int)(v24 - 97) > 0x19
          && (unsigned int)(v24 - 65) > 0x19
          && (unsigned int)(v24 - 48) > 9
          && v24 != 46 )
        {
          goto LABEL_52;
        }
        v34 = a3;
        if ( v7 > 0 )
          sub_140061BD0(&v34, v7);
        v25 = sub_1400615C0(&v34);
        if ( (unsigned int)(v25 - 48) <= 9 || v13 && ((unsigned int)(v25 - 65) <= 5 || (unsigned int)(v25 - 97) <= 5) )
          goto LABEL_50;
        if ( v25 == 46 )
          break;
        if ( v14 || ((v25 - 69) & 0xFFFFFFDF) != 0 )
        {
          if ( v25 == 76 && v7 )
          {
            v26 = v7 + 1;
            if ( v7 + 1 >= v12 )
              goto LABEL_73;
            v34 = a3;
            if ( v26 <= 0 )
            {
              if ( v26 < 0 )
              {
                if ( byte_1400CB61C )
                  __debugbreak();
                sub_14005A480(1834);
              }
            }
            else
            {
              sub_140061BD0(&v34, v7 + 1);
            }
            v28 = sub_1400615C0(&v34);
            if ( (unsigned int)(v28 - 97) > 0x19
              && (unsigned int)(v28 - 65) > 0x19
              && (unsigned int)(v28 - 48) > 9
              && v28 != 46 )
            {
LABEL_73:
              v29 = sub_14003EDD0(a3, v7 - 1, (unsigned __int64)a1);
              if ( (unsigned int)(v29 - 48) <= 9
                || v13 && ((unsigned int)(v29 - 65) <= 5 || (unsigned int)(v29 - 97) <= 5) )
              {
                goto LABEL_53;
              }
            }
          }
          goto LABEL_77;
        }
        ++v7;
        v34 = a3;
        if ( v7 <= 0 )
        {
          if ( v7 < 0 )
          {
            if ( byte_1400CB61C )
              __debugbreak();
            sub_14005A480(1834);
          }
        }
        else
        {
          sub_140061BD0(&v34, v7);
        }
        if ( (((unsigned int)sub_1400615C0(&v34) - 43) & 0xFFFFFFFD) == 0 )
          ++v7;
        v14 = 1;
LABEL_51:
        if ( v7 >= v12 )
          goto LABEL_52;
      }
      if ( v18 )
        goto LABEL_77;
      v18 = 1;
LABEL_50:
      ++v7;
      goto LABEL_51;
    }
  }
LABEL_33:
  if ( v7 < v12 )
    goto LABEL_34;
LABEL_52:
  v26 = v7;
LABEL_53:
  if ( Block )
  {
    v31 = 0;
    j_free(Block);
  }
  return v26;
}
// 14003F0C0: conditional instruction was optimized away because rbx.8==0
// 1400CB61C: using guessed type char byte_1400CB61C;
