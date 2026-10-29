__int64 __fastcall sub_90EC80(__int64 a1, __int64 a2, int a3)
{
  __int16 v5; // ax
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // ecx
  unsigned __int8 v10; // dl
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // r14
  __int64 **v19; // r15
  __int64 v20; // rax
  __int64 **v21; // r14
  __int64 *v22; // rdx
  __int64 **v23; // rax
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // r13
  __int64 v27; // rsi
  __int64 v28; // r14
  __int64 v29; // rdi
  __int64 *v31; // [rsp+10h] [rbp-278h] BYREF
  __int64 *v32; // [rsp+18h] [rbp-270h] BYREF
  __int64 v33; // [rsp+20h] [rbp-268h] BYREF
  __int64 v34; // [rsp+28h] [rbp-260h]
  _QWORD v35[12]; // [rsp+30h] [rbp-258h] BYREF
  _BYTE v36[48]; // [rsp+90h] [rbp-1F8h] BYREF
  __int64 v37; // [rsp+C0h] [rbp-1C8h]
  int v38; // [rsp+C8h] [rbp-1C0h]
  __int64 v39; // [rsp+D0h] [rbp-1B8h]
  _QWORD v40[19]; // [rsp+D8h] [rbp-1B0h] BYREF
  int v41; // [rsp+170h] [rbp-118h]
  __int64 (__fastcall **v42)(); // [rsp+178h] [rbp-110h] BYREF
  int v43; // [rsp+208h] [rbp-80h]
  __int64 v44; // [rsp+210h] [rbp-78h]
  __int64 v45; // [rsp+218h] [rbp-70h]
  __int64 v46; // [rsp+220h] [rbp-68h]
  __int64 v47; // [rsp+228h] [rbp-60h]
  __int64 v48; // [rsp+230h] [rbp-58h]
  __int64 v49; // [rsp+238h] [rbp-50h]
  __int64 v50; // [rsp+240h] [rbp-48h]

  if ( !a3 )
  {
    v35[0] = a2;
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    sub_8F15F0((_QWORD *)(a1 + 56), v35);
    v35[0] = 0;
    sub_8ECC90((_QWORD *)(a1 + 88), v35);
    return 1;
  }
  v5 = *(_WORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == *(_QWORD *)(a1 + 120) )
  {
    v10 = 0;
  }
  else
  {
    if ( v5 )
    {
      if ( v5 != 2 )
      {
        if ( v5 != 1 )
        {
LABEL_19:
          sub_1872CE0("");
          sub_1873130(114, 226);
        }
LABEL_28:
        sub_905890((_QWORD *)a1, a2);
        return 1;
      }
    }
    else if ( !*(_DWORD *)(a2 + 24) )
    {
      goto LABEL_6;
    }
    v12 = sub_1680FB0(*(_QWORD *)(a1 + 32), a2, 0);
    v13 = v12;
    if ( v12 )
    {
      v35[0] = v12;
      ++*(_DWORD *)(v12 + 8);
      sub_8F15F0((_QWORD *)(a1 + 56), v35);
      if ( a2 != v13 )
      {
        v14 = *(_QWORD *)(a1 + 40);
        if ( v14 )
        {
          v15 = *(_DWORD *)(v14 - 4);
          if ( v15 )
            *(_BYTE *)(v14 + 16LL * (unsigned int)(v15 - 1) + 8) |= 2u;
        }
      }
      v16 = sub_1680FB0(*(_QWORD *)(a1 + 72), a2, 0);
      v35[0] = v16;
      if ( v16 )
        ++*(_DWORD *)(v16 + 8);
      sub_8ECC90((_QWORD *)(a1 + 88), v35);
      return 1;
    }
    v5 = *(_WORD *)(a2 + 4);
    v10 = 1;
  }
  if ( v5 == 1 )
    goto LABEL_28;
  if ( v5 == 2 )
    goto LABEL_21;
  if ( v5 )
    goto LABEL_19;
  if ( *(_DWORD *)(a2 + 24) )
  {
LABEL_21:
    sub_39B170(a1, a2, v10, 0, a3 - (a3 != 3));
    return 0;
  }
LABEL_6:
  if ( !(unsigned __int8)sub_9055C0((_QWORD *)a1, a2) )
  {
    if ( !sub_8E4DF0(*(_QWORD **)(a1 + 96), *(_DWORD *)(a1 + 104), a2) )
    {
      v17 = *(_QWORD *)(a1 + 8);
      v18 = *(_QWORD *)(a1 + 144);
      sub_1584DD0(v35, v17, 0);
      v37 = v18;
      v38 = 0;
      v35[0] = &off_1C4C2D8;
      v39 = 0;
      sub_1584DD0(v40, v17, 0);
      v40[18] = 0;
      v41 = 0;
      v40[0] = &off_1C61DB8;
      sub_1584DD0(&v42, v17, 0);
      v19 = *(__int64 ***)(a1 + 96);
      v43 = 0;
      v44 = 0;
      v45 = v17;
      v42 = &off_1C61DE0;
      v20 = *(unsigned int *)(a1 + 104);
      v46 = 0;
      v21 = &v19[v20];
      v47 = v17;
      v48 = 0;
      v49 = v17;
      v50 = 0;
      if ( v19 != v21 )
      {
        while ( (unsigned __int64)*v19 <= 1 )
        {
          if ( v21 == ++v19 )
            goto LABEL_50;
        }
        if ( v19 != v21 )
        {
          v22 = *v19;
          do
          {
            v31 = v22;
            sub_4A3CA0((__int64)v36, &v31);
            v23 = v19 + 1;
            if ( v21 == v19 + 1 )
              break;
            while ( 1 )
            {
              v22 = *v23;
              v19 = v23;
              if ( (unsigned __int64)*v23 > 1 )
                break;
              if ( v21 == ++v23 )
                goto LABEL_50;
            }
          }
          while ( v21 != v23 );
        }
      }
LABEL_50:
      v32 = (__int64 *)a2;
      sub_4A3CA0((__int64)v36, &v32);
      v24 = *(_QWORD *)(a1 + 8);
      v25 = *(_QWORD *)(a1 + 480);
      v33 = 0;
      v34 = v24;
      sub_90EAE0((__int64)v35, v25, (__int64)&v33, a1 + 496);
      v26 = v33;
      v27 = *(_QWORD *)(a1 + 480);
      v28 = v34;
      if ( v27 != v33 )
      {
        if ( v27 )
        {
          v29 = *(_QWORD *)(a1 + 488);
          if ( (*(_DWORD *)(v27 + 8))-- == 1 )
            sub_15D7BC0(v29, v27);
        }
        *(_QWORD *)(a1 + 480) = v26;
        if ( v26 )
          ++*(_DWORD *)(v26 + 8);
      }
      sub_8E4E90(v26, v28);
      sub_2315C0(v35);
    }
    v7 = *(_QWORD *)(a1 + 480);
    if ( a2 == v7 )
    {
      v35[0] = *(_QWORD *)(a1 + 480);
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 40);
      if ( v8 )
      {
        v9 = *(_DWORD *)(v8 - 4);
        if ( v9 )
          *(_BYTE *)(v8 + 16LL * (unsigned int)(v9 - 1) + 8) |= 2u;
      }
      v35[0] = v7;
      if ( !v7 )
        goto LABEL_14;
    }
    ++*(_DWORD *)(v7 + 8);
LABEL_14:
    sub_8F15F0((_QWORD *)(a1 + 56), v35);
  }
  return 1;
}

