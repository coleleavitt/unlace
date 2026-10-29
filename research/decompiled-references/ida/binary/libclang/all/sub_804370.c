__int64 __fastcall sub_804370(__int64 *a1, __int64 *a2)
{
  unsigned int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // ebx
  void *v7; // rdi
  unsigned int v8; // edx
  unsigned int v9; // r12d
  unsigned int v11; // ebp
  __int64 v12; // rdx
  char v13; // al
  char v14; // cl
  __int64 v15; // rsi
  __int64 v16; // rax
  unsigned int v17; // edx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rsi
  void *v26; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v27; // [rsp+8h] [rbp-40h]
  char v28; // [rsp+Ch] [rbp-3Ch]
  void *v29; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v30; // [rsp+18h] [rbp-30h]
  char v31; // [rsp+1Ch] [rbp-2Ch]
  unsigned __int64 v32; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v33; // [rsp+28h] [rbp-20h]

  v4 = *((_DWORD *)a1 + 2);
  v5 = *((unsigned int *)a2 + 2);
  if ( (_DWORD)v5 != v4 )
  {
    if ( (unsigned int)v5 >= v4 )
    {
      if ( *((_BYTE *)a1 + 12) )
      {
        sub_2587D60(&v32, a1);
        v6 = v33;
        v7 = (void *)v32;
        v28 = 1;
        v8 = *((_DWORD *)a2 + 2);
        v27 = v33;
        v26 = (void *)v32;
        if ( v33 != v8 )
        {
          if ( v8 >= v33 )
          {
            sub_2587D60(&v32, &v26);
            v31 = 1;
            v30 = v33;
            v29 = (void *)v32;
            goto LABEL_7;
          }
          goto LABEL_47;
        }
        if ( *((_BYTE *)a2 + 12) )
          goto LABEL_70;
        v23 = *a2;
        v24 = 1LL << ((unsigned __int8)v33 - 1);
        if ( v33 <= 0x40 )
        {
          v9 = 1;
          if ( (v24 & v23) != 0 )
            return v9;
          goto LABEL_70;
        }
        v9 = 1;
        if ( (*(_QWORD *)(v23 + 8LL * ((v33 - 1) >> 6)) & v24) == 0 )
        {
LABEL_70:
          v9 = sub_25867A0(&v26, a2);
          goto LABEL_11;
        }
      }
      else
      {
        sub_2587BE0(&v32, a1, v5);
        v6 = v33;
        v28 = 0;
        v19 = *((unsigned int *)a2 + 2);
        v27 = v33;
        v26 = (void *)v32;
        if ( (_DWORD)v19 != v33 )
        {
          if ( (unsigned int)v19 >= v33 )
          {
            sub_2587BE0(&v32, &v26, v19);
            v31 = 0;
            v30 = v33;
            v29 = (void *)v32;
LABEL_7:
            v9 = sub_804370(&v29, a2);
            if ( v30 <= 0x40 )
            {
LABEL_10:
              v6 = v27;
              goto LABEL_11;
            }
LABEL_8:
            if ( v29 )
              operator delete[](v29);
            goto LABEL_10;
          }
LABEL_47:
          if ( *((_BYTE *)a2 + 12) )
          {
            sub_2587D60(&v32, a2);
            v31 = 1;
          }
          else
          {
            sub_2587BE0(&v32, a2, v6);
            v31 = 0;
          }
          v30 = v33;
          v29 = (void *)v32;
          v9 = sub_804370(&v26, &v29);
          if ( v30 <= 0x40 )
            goto LABEL_10;
          goto LABEL_8;
        }
        if ( !*((_BYTE *)a2 + 12) )
        {
          v9 = sub_2586820(&v26, a2);
LABEL_11:
          if ( v6 > 0x40 )
          {
LABEL_12:
            v7 = v26;
            goto LABEL_13;
          }
          return v9;
        }
        v7 = (void *)v32;
        v25 = 1LL << ((unsigned __int8)v19 - 1);
        if ( (unsigned int)v19 <= 0x40 )
        {
          v9 = -1;
          if ( (v25 & v32) == 0 )
            return (unsigned int)sub_25867A0(&v26, a2);
          return v9;
        }
        v9 = -1;
        if ( (*(_QWORD *)(v32 + 8LL * ((unsigned int)(v19 - 1) >> 6)) & v25) == 0 )
        {
          v9 = sub_25867A0(&v26, a2);
          goto LABEL_12;
        }
      }
LABEL_13:
      if ( v7 )
      {
        operator delete[](v7);
        return v9;
      }
      return v9;
    }
    if ( *((_BYTE *)a2 + 12) )
    {
      sub_2587D60(&v32, a2);
      v11 = v33;
      v7 = (void *)v32;
      v28 = 1;
      v17 = *((_DWORD *)a1 + 2);
      v27 = v33;
      v26 = (void *)v32;
      if ( v33 != v17 )
      {
        if ( v33 >= v17 )
        {
LABEL_18:
          if ( *((_BYTE *)a1 + 12) )
          {
            sub_2587D60(&v32, a1);
            v31 = 1;
          }
          else
          {
            sub_2587BE0(&v32, a1, v11);
            v31 = 0;
          }
          v30 = v33;
          v29 = (void *)v32;
          v9 = sub_804370(&v29, &v26);
          if ( v30 > 0x40 )
          {
LABEL_33:
            if ( v29 )
              operator delete[](v29);
          }
LABEL_35:
          v11 = v27;
          goto LABEL_36;
        }
        sub_2587D60(&v32, &v26);
        v31 = 1;
        v30 = v33;
        v29 = (void *)v32;
LABEL_32:
        v9 = sub_804370(a1, &v29);
        if ( v30 > 0x40 )
          goto LABEL_33;
        goto LABEL_35;
      }
      if ( !*((_BYTE *)a1 + 12) )
      {
        v20 = *a1;
        v21 = 1LL << ((unsigned __int8)v33 - 1);
        if ( v33 <= 0x40 )
        {
          v9 = -1;
          if ( (v21 & v20) != 0 )
            return v9;
          return (unsigned int)sub_25867A0(a1, &v26);
        }
        v9 = -1;
        if ( (*(_QWORD *)(v20 + 8LL * ((v33 - 1) >> 6)) & v21) != 0 )
          goto LABEL_13;
LABEL_56:
        v9 = sub_25867A0(a1, &v26);
        goto LABEL_12;
      }
      v9 = sub_25867A0(a1, &v26);
    }
    else
    {
      sub_2587BE0(&v32, a2, v4);
      v11 = v33;
      v28 = 0;
      v12 = *((unsigned int *)a1 + 2);
      v27 = v33;
      v26 = (void *)v32;
      if ( (_DWORD)v12 != v33 )
      {
        if ( v33 >= (unsigned int)v12 )
          goto LABEL_18;
        sub_2587BE0(&v32, &v26, v12);
        v31 = 0;
        v30 = v33;
        v29 = (void *)v32;
        goto LABEL_32;
      }
      if ( *((_BYTE *)a1 + 12) )
      {
        v7 = (void *)v32;
        v22 = 1LL << ((unsigned __int8)v12 - 1);
        if ( (unsigned int)v12 <= 0x40 )
        {
          v9 = 1;
          if ( (v22 & v32) != 0 )
            return v9;
          return (unsigned int)sub_25867A0(a1, &v26);
        }
        v9 = 1;
        if ( (*(_QWORD *)(v32 + 8LL * ((unsigned int)(v12 - 1) >> 6)) & v22) != 0 )
          goto LABEL_13;
        goto LABEL_56;
      }
      v9 = sub_2586820(a1, &v26);
    }
LABEL_36:
    if ( v11 <= 0x40 )
      return v9;
    goto LABEL_12;
  }
  v13 = *((_BYTE *)a1 + 12);
  v14 = *((_BYTE *)a2 + 12);
  if ( v13 != v14 )
  {
    if ( v13 )
    {
      if ( !v14 )
      {
        v18 = *a2;
        if ( (unsigned int)v5 > 0x40 )
          v18 = *(_QWORD *)(v18 + 8LL * ((unsigned int)(v5 - 1) >> 6));
        v9 = 1;
        if ( (v18 & (1LL << ((unsigned __int8)v5 - 1))) != 0 )
          return v9;
      }
    }
    else
    {
      v15 = 1LL << ((unsigned __int8)v5 - 1);
      v16 = *a1;
      if ( (unsigned int)v5 > 0x40 )
      {
        if ( (*(_QWORD *)(v16 + 8LL * ((unsigned int)(v5 - 1) >> 6)) & v15) != 0 )
          return 0xFFFFFFFFLL;
      }
      else if ( (v16 & v15) != 0 )
      {
        return 0xFFFFFFFFLL;
      }
    }
    return sub_25867A0(a1, a2);
  }
  if ( v13 )
    return sub_25867A0(a1, a2);
  return ((__int64 (*)(void))sub_2586820)();
}

