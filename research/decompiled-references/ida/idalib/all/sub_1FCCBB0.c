__int64 __fastcall sub_1FCCBB0(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // r13
  _BOOL8 v6; // rsi
  __int64 v7; // r12
  _BOOL8 v8; // rbp
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 result; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rdi
  unsigned int v17; // edx
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbp
  __int64 v21; // rbp
  unsigned int v22; // esi
  __int64 v23; // r12
  __int64 v24; // rdi
  int v25; // r10d
  __int64 *v26; // r11
  bool v27; // zf
  __int64 v28; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v29[8]; // [rsp+18h] [rbp-40h] BYREF

  v4 = *a2;
  if ( (*a2 & 0x200) != 0 )
  {
    v5 = a2[3];
    v6 = v5 != 0;
  }
  else
  {
    v6 = 0;
    v5 = 0;
  }
  if ( (v4 & 0x400) != 0 )
  {
    v7 = a2[((v4 & 0x200) != 0) + 3];
    v8 = v7 != 0;
  }
  else
  {
    v8 = 0;
    v7 = 0;
  }
  sub_9B9C90(a1[3], v6);
  sub_9B9C90(a1[3], v8);
  sub_9B9C90(a1[3], (*(_WORD *)a2 & 0x800) != 0);
  sub_183F100((__int64)(a1 + 4), a2[((*a2 & 0x200) != 0) + 3 + ((*a2 & 0x400) != 0)]);
  sub_183F100((__int64)(a1 + 4), a2[((*a2 & 0x400) != 0) + 4 + (unsigned int)((*a2 & 0x200) != 0)]);
  if ( v5 )
  {
    v9 = 0;
    if ( (*(_WORD *)a2 & 0x200) != 0 )
      v9 = a2[3];
    sub_183F100((__int64)(a1 + 4), v9);
  }
  if ( v7 )
  {
    v10 = 0;
    if ( (*a2 & 0x400) != 0 )
      v10 = a2[((*a2 & 0x200) != 0) + 3];
    sub_183F100((__int64)(a1 + 4), v10);
  }
  sub_1F6F570((_QWORD *)a1[2], *((_DWORD *)a2 + 1), a1[3]);
  sub_1F6F570((_QWORD *)a1[2], *((_DWORD *)a2 + 4), a1[3]);
  result = sub_1F6F570((_QWORD *)a1[2], *((_DWORD *)a2 + 5), a1[3]);
  v15 = a2[1];
  if ( v15 )
  {
    while ( 1 )
    {
      v21 = *a1;
      v28 = v15;
      v22 = *(_DWORD *)(v21 + 3064);
      v23 = *(unsigned int *)(v21 + 3056);
      if ( !v22 )
        break;
      v14 = v22 - 1;
      v16 = *(_QWORD *)(v21 + 3048);
      v17 = v14 & (((unsigned int)v15 >> 9) ^ ((unsigned int)v15 >> 4));
      v18 = (__int64 *)(v16 + 16LL * v17);
      v19 = *v18;
      if ( *v18 != v15 )
      {
        v25 = 1;
        v26 = nullptr;
        if ( v19 != -4096 )
        {
          while ( 1 )
          {
            if ( v19 == -8192 && !v26 )
              v26 = v18;
            v17 = v14 & (v25 + v17);
            v18 = (__int64 *)(v16 + 16LL * v17);
            v19 = *v18;
            if ( *v18 == v15 )
              goto LABEL_16;
            if ( v19 == -4096 )
            {
              if ( v26 )
                v18 = v26;
              break;
            }
            ++v25;
          }
        }
        v12 = (unsigned int)(v23 + 1);
        v13 = 3 * v22;
        v29[0] = v18;
        if ( 4 * (int)v12 < (unsigned int)v13 )
        {
          v24 = v15;
          v13 = v22 - *(_DWORD *)(v21 + 3060) - (unsigned int)v12;
          v14 = v22 >> 3;
          if ( (unsigned int)v13 > (unsigned int)v14 )
            goto LABEL_27;
          goto LABEL_21;
        }
LABEL_20:
        v22 *= 2;
LABEL_21:
        sub_1FCC760((__int64 *)(v21 + 3048), v22, v12, v13, v21 + 3048, v14);
        sub_1FCBEE0((__int64 *)(v21 + 3048), &v28, v29);
        v24 = v28;
        LODWORD(v12) = *(_DWORD *)(v21 + 3056) + 1;
        v18 = (__int64 *)v29[0];
LABEL_27:
        v27 = *v18 == -4096;
        *(_DWORD *)(v21 + 3056) = v12;
        if ( !v27 )
          --*(_DWORD *)(v21 + 3060);
        *v18 = v24;
        *((_DWORD *)v18 + 2) = 0;
      }
LABEL_16:
      *((_DWORD *)v18 + 2) = v23;
      v20 = a1[3];
      result = *(unsigned int *)(v20 + 8);
      v13 = *(unsigned int *)(v20 + 12);
      if ( result + 1 > v13 )
      {
        sub_2237220(a1[3], v20 + 16, result + 1, 8);
        v12 = *(unsigned int *)(v20 + 8);
        result = *(_QWORD *)v20;
        *(_QWORD *)(*(_QWORD *)v20 + 8 * v12) = v23;
        v15 = *(_QWORD *)(v15 + 16);
        ++*(_DWORD *)(v20 + 8);
        if ( !v15 )
          goto LABEL_23;
      }
      else
      {
        v12 = *(_QWORD *)v20;
        *(_QWORD *)(*(_QWORD *)v20 + 8 * result) = v23;
        v15 = *(_QWORD *)(v15 + 16);
        ++*(_DWORD *)(v20 + 8);
        if ( !v15 )
          goto LABEL_23;
      }
    }
    v29[0] = 0;
    goto LABEL_20;
  }
LABEL_23:
  *((_DWORD *)a1 + 56) = 157;
  return result;
}
