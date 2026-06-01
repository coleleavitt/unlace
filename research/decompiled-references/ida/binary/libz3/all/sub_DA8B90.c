__int64 __fastcall sub_DA8B90(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r8
  __int64 v5; // rdi
  __int64 result; // rax
  char v7; // r14
  char v8; // r11
  unsigned __int8 v9; // r12
  unsigned int v10; // r15d
  unsigned __int64 v11; // rsi
  unsigned __int8 v12; // r13
  unsigned int v13; // r10d
  __int64 v14; // rdx
  unsigned int *v15; // rbx
  __int64 v16; // rbp
  __int64 v17; // rcx
  unsigned __int64 v18; // rsi
  __int64 v19; // [rsp+0h] [rbp-78h]
  unsigned int v20; // [rsp+14h] [rbp-64h]
  unsigned __int64 v21; // [rsp+18h] [rbp-60h]
  unsigned int *v22; // [rsp+20h] [rbp-58h]
  __int64 v23; // [rsp+30h] [rbp-48h] BYREF
  __int64 v24[8]; // [rsp+38h] [rbp-40h] BYREF

  v4 = a2 & 0xFFFFFFFFFFFFFFFELL;
  v5 = a2;
  result = a3;
  v7 = a2 & 1;
  v8 = a3 & 1;
  v9 = a2;
  v10 = *(_DWORD *)(a2 & 0xFFFFFFFFFFFFFFFELL);
  v24[0] = a2;
  v23 = a3;
  v11 = a3 & 0xFFFFFFFFFFFFFFFELL;
  if ( !v10 )
  {
LABEL_43:
    if ( !v7 )
      return result;
    return *(_QWORD *)(a1 + 656);
  }
  v20 = v10;
  v12 = a3;
  while ( 1 )
  {
    v13 = *(_DWORD *)v11;
    if ( !*(_DWORD *)v11 )
    {
      if ( v8 )
        return *(_QWORD *)(a1 + 656);
      return v5;
    }
    if ( v4 == v11 )
    {
      if ( v7 == v8 )
        return v5;
      return *(_QWORD *)(a1 + 656);
    }
    v14 = *(_QWORD *)(v4 + 8);
    if ( !v14 )
    {
      v17 = *(_QWORD *)(v11 + 8);
      if ( !v17 )
        goto LABEL_110;
      v21 = v17 & 0xFFFFFFFFFFFFFFFELL;
      v19 = *(_QWORD *)(v11 + 16);
      goto LABEL_23;
    }
    v15 = (unsigned int *)(v14 & 0xFFFFFFFFFFFFFFFELL);
    if ( (v14 & 0xFFFFFFFFFFFFFFFELL) == v11 && (v14 & 1) != v8 )
      break;
    v16 = *(_QWORD *)(v4 + 16);
    v22 = (unsigned int *)(v16 & 0xFFFFFFFFFFFFFFFELL);
    if ( (v16 & 0xFFFFFFFFFFFFFFFELL) == v11 )
    {
      if ( (v16 & 1) != v8 )
        break;
      if ( v14 == result )
      {
LABEL_40:
        if ( !v7 )
          return v5;
        goto LABEL_41;
      }
    }
    else if ( v14 == result )
    {
      goto LABEL_40;
    }
    if ( v16 == result )
    {
      if ( !v7 )
        return v5;
LABEL_46:
      v12 = result;
      v4 = v14 & 0xFFFFFFFFFFFFFFFELL;
      v9 = v14 ^ 1;
      v5 = v14 ^ 1;
      v11 = result & 0xFFFFFFFFFFFFFFFELL;
      v20 = *v15;
      goto LABEL_42;
    }
    v17 = *(_QWORD *)(v11 + 8);
    if ( !v17 )
      goto LABEL_110;
    v19 = *(_QWORD *)(v11 + 16);
    if ( ((v12 | v9) & 1) != 0 )
    {
LABEL_53:
      if ( v8 )
      {
        if ( !v7 )
        {
LABEL_73:
          if ( v8 )
          {
            v21 = v17 & 0xFFFFFFFFFFFFFFFELL;
            if ( v15 == (unsigned int *)(v17 & 0xFFFFFFFFFFFFFFFELL) && (v14 & 1) != (v17 & 1) )
              return v5;
            v11 = v19 & 0xFFFFFFFFFFFFFFFELL;
            if ( v15 == (unsigned int *)(v19 & 0xFFFFFFFFFFFFFFFELL) && (v14 & 1) != (v19 & 1) )
              return v5;
            if ( v22 == (unsigned int *)v21 && (v16 & 1) != (v17 & 1)
              || v22 == (unsigned int *)v11 && (v16 & 1) != (v19 & 1) )
            {
              return v5;
            }
            if ( v16 == v17 || v14 == v17 )
            {
LABEL_71:
              v9 = v5;
              v4 = v5 & 0xFFFFFFFFFFFFFFFELL;
              v12 = v19 ^ 1;
              result = v19 ^ 1;
              goto LABEL_29;
            }
            if ( v16 == v19 || v14 == v19 )
              goto LABEL_28;
            if ( (v9 & v12 & 1) != 0 )
              goto LABEL_83;
            goto LABEL_109;
          }
        }
        if ( (v9 & v12 & 1) != 0 )
        {
          if ( v14 == v17 )
          {
            if ( v22 == (unsigned int *)(v19 & 0xFFFFFFFFFFFFFFFELL) && (v16 & 1) != (v19 & 1) )
              return v14 ^ 1;
            v18 = v14 & 0xFFFFFFFFFFFFFFFELL;
            v21 = v14 & 0xFFFFFFFFFFFFFFFELL;
            goto LABEL_84;
          }
LABEL_83:
          v18 = v17 & 0xFFFFFFFFFFFFFFFELL;
          v21 = v17 & 0xFFFFFFFFFFFFFFFELL;
LABEL_84:
          if ( v15 == (unsigned int *)v18 && (((unsigned __int8)v17 ^ (unsigned __int8)v14) & 1) != 0 && v16 == v19 )
            return v16 ^ 1;
LABEL_23:
          if ( v4 != v21 )
            goto LABEL_24;
          goto LABEL_31;
        }
LABEL_109:
        v21 = v17 & 0xFFFFFFFFFFFFFFFELL;
        goto LABEL_23;
      }
      if ( !v7 )
        goto LABEL_73;
      v21 = v17 & 0xFFFFFFFFFFFFFFFELL;
      if ( v15 == (unsigned int *)(v17 & 0xFFFFFFFFFFFFFFFELL) && (v14 & 1) != (v17 & 1)
        || v15 == (unsigned int *)(v19 & 0xFFFFFFFFFFFFFFFELL) && (v14 & 1) != (v19 & 1)
        || v22 == (unsigned int *)v21 && (v16 & 1) != (v17 & 1)
        || v22 == (unsigned int *)(v19 & 0xFFFFFFFFFFFFFFFELL) && (v16 & 1) != (v19 & 1) )
      {
        return result;
      }
      if ( v16 == v17 || v16 == v19 )
        goto LABEL_46;
      if ( v14 != v17 && v14 != v19 )
      {
        if ( (v9 & v12 & 1) == 0 )
        {
          if ( v21 != v4 )
          {
            v11 = v19 & 0xFFFFFFFFFFFFFFFELL;
            if ( (v19 & 0xFFFFFFFFFFFFFFFELL) != v4 )
            {
LABEL_66:
              if ( v17 == v5 )
                return result;
LABEL_26:
              if ( v19 != v5 )
              {
LABEL_110:
                v24[0] = v5;
                v23 = result;
                if ( v13 >= v20 )
                  return sub_DA8580(a1, v24, &v23);
                else
                  return sub_DA8580(a1, &v23, v24);
              }
              if ( !v8 )
                return result;
LABEL_28:
              v11 = v21;
              v9 = v5;
              v12 = v17 ^ 1;
              result = v17 ^ 1;
              v4 = v5 & 0xFFFFFFFFFFFFFFFELL;
              goto LABEL_29;
            }
            goto LABEL_50;
          }
LABEL_31:
          if ( (v17 & 1) != v7 )
          {
            if ( !v8 )
              return *(_QWORD *)(a1 + 656);
            return v5;
          }
LABEL_24:
          v11 = v19 & 0xFFFFFFFFFFFFFFFELL;
          if ( (v19 & 0xFFFFFFFFFFFFFFFELL) != v4 )
          {
LABEL_25:
            if ( v5 != v17 )
              goto LABEL_26;
            if ( !v8 )
              return result;
            goto LABEL_71;
          }
LABEL_50:
          if ( (v19 & 1) != v7 )
          {
            if ( !v8 )
              return *(_QWORD *)(a1 + 656);
            return v5;
          }
          goto LABEL_25;
        }
        if ( v15 == (unsigned int *)v21 )
        {
          if ( v21 == v4 )
            goto LABEL_31;
        }
        else if ( v21 == v4 )
        {
          goto LABEL_31;
        }
        v11 = v19 & 0xFFFFFFFFFFFFFFFELL;
        if ( v4 != (v19 & 0xFFFFFFFFFFFFFFFELL) )
          goto LABEL_66;
        goto LABEL_50;
      }
LABEL_41:
      v4 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFELL;
      v12 = result;
      v9 = v16 ^ 1;
      v5 = v16 ^ 1;
      v11 = result & 0xFFFFFFFFFFFFFFFELL;
      v20 = *v22;
LABEL_42:
      v7 = v9 & 1;
      v8 = result & 1;
      if ( !v20 )
        goto LABEL_43;
    }
    else
    {
      if ( v15 == (unsigned int *)(v17 & 0xFFFFFFFFFFFFFFFELL) && (v14 & 1) != (v17 & 1) )
        return *(_QWORD *)(a1 + 656);
      v11 = v19 & 0xFFFFFFFFFFFFFFFELL;
      if ( v15 == (unsigned int *)(v19 & 0xFFFFFFFFFFFFFFFELL) && (v14 & 1) != (v19 & 1) )
        return *(_QWORD *)(a1 + 656);
      if ( v22 == (unsigned int *)(v17 & 0xFFFFFFFFFFFFFFFELL) && (v16 & 1) != (v17 & 1)
        || v22 == (unsigned int *)v11 && (v16 & 1) != (v19 & 1) )
      {
        return *(_QWORD *)(a1 + 656);
      }
      if ( v14 != v17 && v16 != v17 )
      {
        if ( v16 == v19 )
        {
          v12 = result;
          v4 = v14 & 0xFFFFFFFFFFFFFFFELL;
          v11 = result & 0xFFFFFFFFFFFFFFFELL;
          v9 = v14;
          v20 = *v15;
          v5 = v14;
          goto LABEL_42;
        }
        if ( v14 == v19 )
        {
          v11 = v17 & 0xFFFFFFFFFFFFFFFELL;
          v9 = v5;
          v12 = v17;
          v4 = v5 & 0xFFFFFFFFFFFFFFFELL;
          result = v17;
          goto LABEL_29;
        }
        goto LABEL_53;
      }
      v12 = v19;
      v9 = v5;
      v4 = v5 & 0xFFFFFFFFFFFFFFFELL;
      result = v19;
LABEL_29:
      v7 = v5 & 1;
      v8 = v12 & 1;
    }
  }
  if ( !v7 )
    return *(_QWORD *)(a1 + 656);
  return result;
}

