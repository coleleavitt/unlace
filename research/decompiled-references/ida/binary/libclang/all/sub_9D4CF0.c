__int64 __fastcall sub_9D4CF0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v7; // eax
  __int64 v8; // rax
  unsigned int v9; // edx
  __int64 v10; // rax
  int v11; // edx
  unsigned __int8 **v12; // rax
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // rax
  int v17; // edx
  unsigned __int8 v18; // r14
  unsigned __int8 **v19; // rax
  unsigned __int8 **v20; // r13
  int v21; // eax
  __int64 v22; // rdi
  unsigned int v23; // eax
  unsigned __int64 v24; // rax
  unsigned __int8 **v25; // rax
  unsigned __int8 **v26; // rax
  unsigned __int8 **v27; // r13
  int v28; // eax
  __int64 v29; // rdi
  unsigned int v30; // eax
  _QWORD v31[6]; // [rsp+8h] [rbp-30h] BYREF

  v7 = *(_DWORD *)(a3 + 48);
  if ( !v7 )
  {
    v8 = *(_QWORD *)(a3 + 24);
    if ( v8 )
    {
      v9 = 1;
      if ( !*(_BYTE *)(v8 + 26) )
        return v9;
      v10 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
      v11 = *(_DWORD *)(a3 + 48);
      v31[0] = v10;
      if ( v11 || !*(_BYTE *)(*(_QWORD *)(a3 + 24) + 28LL) )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 24LL))(*(_QWORD *)(a1 + 24)) )
        {
          if ( *(_DWORD *)(a3 + 48) )
          {
            v26 = (unsigned __int8 **)sub_A2E0C0(a1, v31, 2221, 1);
            v27 = v26;
            if ( v26 )
            {
              sub_9B5410(v26, a4);
              sub_9B5410(v27, 1);
            }
          }
          else
          {
            v18 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a3 + 24) + 32LL) + 50LL);
            v19 = (unsigned __int8 **)sub_A2E0C0(a1, v31, 2221, 1);
            v20 = v19;
            if ( v19 )
            {
              sub_9B5410(v19, a4);
              sub_9B5410(v20, v18 ^ 1u);
            }
            if ( v18 )
            {
              v21 = *(_DWORD *)(a3 + 48);
              if ( v21 == 1 )
              {
                v22 = *(_QWORD *)(a3 + 24);
              }
              else if ( (unsigned int)(v21 - 2) <= 1 )
              {
                v22 = 0;
              }
              else
              {
                v22 = *(_QWORD *)(*(_QWORD *)(a3 + 24) + 32LL);
              }
              v23 = sub_BEE210(v22);
              sub_A2DD70(a1, v23, 2285);
              return 0;
            }
          }
          v28 = *(_DWORD *)(a3 + 48);
          if ( v28 == 1 )
          {
            v29 = *(_QWORD *)(a3 + 24);
          }
          else if ( (unsigned int)(v28 - 2) <= 1 )
          {
            v29 = 0;
          }
          else
          {
            v29 = *(_QWORD *)(*(_QWORD *)(a3 + 24) + 32LL);
          }
          v30 = sub_BEE210(v29);
          sub_A2DD70(a1, v30, 105);
          return 0;
        }
        return 0;
      }
      v12 = (unsigned __int8 **)sub_A2E0C0(a1, v31, 2165, 0);
      if ( v12 )
        goto LABEL_7;
      return 0;
    }
LABEL_14:
    v14 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
    v15 = *(_DWORD *)(a3 + 48);
    v31[0] = v14;
    if ( !v15 )
    {
      v16 = *(_QWORD *)(a3 + 24);
      if ( v16 )
      {
        v17 = *(_DWORD *)(a3 + 32);
        if ( *(_DWORD *)(*(_QWORD *)(v16 + 32) + 16LL) != v17 )
        {
          if ( v17 )
          {
            v24 = *(_QWORD *)sub_8E5480(a3);
            if ( (v24 & 2) == 0 && v24 > 3 )
            {
              v25 = (unsigned __int8 **)sub_A2E0C0(a1, v31, 2259, 0);
              if ( v25 )
              {
                sub_9B5410(v25, 2);
                return 0;
              }
              return 0;
            }
          }
        }
      }
    }
    v12 = (unsigned __int8 **)sub_A2E0C0(a1, v31, 2168, 0);
    if ( v12 )
LABEL_7:
      sub_9B5410(v12, a4);
    return 0;
  }
  if ( v7 != 2 )
  {
    v9 = 1;
    if ( v7 == 3 || *(_QWORD *)(a3 + 32) || *(_QWORD *)a3 )
      return v9;
    goto LABEL_14;
  }
  if ( !*(_QWORD *)(a3 + 24) )
    goto LABEL_14;
  return 1;
}

