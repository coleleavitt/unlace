__int64 __fastcall sub_227ED0(__int64 *a1, __int64 a2, int a3, unsigned int a4)
{
  int v5; // ebp
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // r8
  int v12; // ebp
  __int64 result; // rax
  int v14; // eax
  int v15; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v16; // [rsp+8h] [rbp-30h]

  v5 = a2;
  v16 = __readfsqword(0x28u);
  if ( a1 && (a2 = *a1, (unsigned __int8)*a1) )
  {
    v7 = (__int64)&v15;
    v15 = 0;
    get_tinfo_size(&v15, a2, 0);
    v10 = v15;
  }
  else
  {
    v7 = (unsigned int)v5;
    v10 = round_down_power2((unsigned int)v5);
    if ( v10 > 1 )
    {
      while ( 1 )
      {
        v8 = (unsigned int)(v5 >> 31);
        LODWORD(v8) = v5 % v10;
        if ( !(v5 % v10) )
          break;
        v10 >>= 1;
        if ( v10 == 1 )
          goto LABEL_8;
      }
    }
  }
  if ( (v10 & (v10 - 1)) != 0 )
    sub_227240(v7, a2, v8, v9, v11);
LABEL_8:
  v12 = 2 * a3;
  if ( v10 <= 2 * a3 )
  {
    if ( a3 > v10 )
    {
      if ( a4 > 0x10 )
      {
LABEL_11:
        if ( a4 != 176 && a4 != 256 )
        {
LABEL_13:
          if ( !(unsigned __int8)getinf_flag(67, 2) )
            goto LABEL_14;
        }
LABEL_23:
        a3 = v10;
        goto LABEL_14;
      }
LABEL_31:
      a4 = getinf(99);
      goto LABEL_11;
    }
    if ( a4 > 0x10 )
      goto LABEL_18;
    goto LABEL_40;
  }
  if ( a4 <= 0x10 )
  {
    v14 = getinf(99);
    if ( v14 == 176 || v14 == 256 )
    {
      if ( a3 > v12 )
      {
LABEL_30:
        v10 = 2 * a3;
        goto LABEL_31;
      }
LABEL_39:
      v10 = 2 * a3;
LABEL_40:
      a4 = getinf(99);
LABEL_18:
      if ( a4 == 176 || a4 == 256 )
        goto LABEL_14;
      goto LABEL_20;
    }
LABEL_27:
    if ( (unsigned __int8)getinf_flag(67, 512) )
      goto LABEL_23;
    if ( a3 > v12 )
    {
      v10 = 2 * a3;
      if ( a4 > 0x10 )
        goto LABEL_13;
      goto LABEL_30;
    }
    v10 = 2 * a3;
    if ( a4 > 0x10 )
    {
LABEL_20:
      if ( (unsigned __int8)getinf_flag(67, 4) )
        a3 = v10;
      goto LABEL_14;
    }
    goto LABEL_39;
  }
  if ( a4 != 256 && a4 != 176 )
    goto LABEL_27;
  if ( a3 > v12 )
    a3 *= 2;
LABEL_14:
  result = 1;
  if ( a3 > 0 )
    return (unsigned int)a3;
  return result;
}
