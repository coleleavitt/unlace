__int64 __fastcall sub_914E40(__int64 a1, __int64 a2, int a3)
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
  __int64 v16; // r12
  __int64 v17; // r14
  __int64 **v18; // r15
  __int64 v19; // rax
  __int64 **v20; // r14
  __int64 *v21; // rdx
  __int64 **v22; // rax
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // r12
  __int64 v26; // rsi
  __int64 v27; // r14
  __int64 v28; // rdi
  __int64 *v30; // [rsp+10h] [rbp-278h] BYREF
  __int64 *v31; // [rsp+18h] [rbp-270h] BYREF
  __int64 v32; // [rsp+20h] [rbp-268h] BYREF
  __int64 v33; // [rsp+28h] [rbp-260h]
  _QWORD v34[12]; // [rsp+30h] [rbp-258h] BYREF
  _BYTE v35[48]; // [rsp+90h] [rbp-1F8h] BYREF
  __int64 v36; // [rsp+C0h] [rbp-1C8h]
  int v37; // [rsp+C8h] [rbp-1C0h]
  __int64 v38; // [rsp+D0h] [rbp-1B8h]
  _QWORD v39[19]; // [rsp+D8h] [rbp-1B0h] BYREF
  int v40; // [rsp+170h] [rbp-118h]
  __int64 (__fastcall **v41)(); // [rsp+178h] [rbp-110h] BYREF
  int v42; // [rsp+208h] [rbp-80h]
  __int64 v43; // [rsp+210h] [rbp-78h]
  __int64 v44; // [rsp+218h] [rbp-70h]
  __int64 v45; // [rsp+220h] [rbp-68h]
  __int64 v46; // [rsp+228h] [rbp-60h]
  __int64 v47; // [rsp+230h] [rbp-58h]
  __int64 v48; // [rsp+238h] [rbp-50h]
  __int64 v49; // [rsp+240h] [rbp-48h]

  if ( !a3 )
  {
    v34[0] = a2;
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    sub_8F15F0((_QWORD *)(a1 + 56), v34);
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
        sub_904470((_QWORD *)a1, a2);
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
      v34[0] = v12;
      ++*(_DWORD *)(v12 + 8);
      sub_8F15F0((_QWORD *)(a1 + 56), v34);
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
  if ( !(unsigned __int8)sub_904270((_QWORD *)a1, a2) )
  {
    if ( !sub_8E4DF0(*(_QWORD **)(a1 + 96), *(_DWORD *)(a1 + 104), a2) )
    {
      v16 = *(_QWORD *)(a1 + 8);
      v17 = *(_QWORD *)(a1 + 144);
      sub_1584DD0(v34, v16, 0);
      v36 = v17;
      v37 = 0;
      v34[0] = &off_1C4C1C8;
      v38 = 0;
      sub_1584DD0(v39, v16, 0);
      v39[18] = 0;
      v40 = 0;
      v39[0] = &off_1C61DB8;
      sub_1584DD0(&v41, v16, 0);
      v18 = *(__int64 ***)(a1 + 96);
      v42 = 0;
      v43 = 0;
      v44 = v16;
      v41 = &off_1C61DE0;
      v19 = *(unsigned int *)(a1 + 104);
      v45 = 0;
      v20 = &v18[v19];
      v46 = v16;
      v47 = 0;
      v48 = v16;
      v49 = 0;
      if ( v18 != v20 )
      {
        while ( (unsigned __int64)*v18 <= 1 )
        {
          if ( v20 == ++v18 )
            goto LABEL_47;
        }
        if ( v18 != v20 )
        {
          v21 = *v18;
          do
          {
            v30 = v21;
            sub_4A3CA0((__int64)v35, &v30);
            v22 = v18 + 1;
            if ( v20 == v18 + 1 )
              break;
            while ( 1 )
            {
              v21 = *v22;
              v18 = v22;
              if ( (unsigned __int64)*v22 > 1 )
                break;
              if ( v20 == ++v22 )
                goto LABEL_47;
            }
          }
          while ( v20 != v22 );
        }
      }
LABEL_47:
      v31 = (__int64 *)a2;
      sub_4A3CA0((__int64)v35, &v31);
      v23 = *(_QWORD *)(a1 + 8);
      v24 = *(_QWORD *)(a1 + 480);
      v32 = 0;
      v33 = v23;
      sub_913A40((__int64)v34, v24, (__int64)&v32, a1 + 496);
      v25 = v32;
      v26 = *(_QWORD *)(a1 + 480);
      v27 = v33;
      if ( v32 != v26 )
      {
        if ( v26 )
        {
          v28 = *(_QWORD *)(a1 + 488);
          if ( (*(_DWORD *)(v26 + 8))-- == 1 )
            sub_15D7BC0(v28, v26);
        }
        *(_QWORD *)(a1 + 480) = v25;
        if ( v25 )
          ++*(_DWORD *)(v25 + 8);
      }
      sub_8E4E90(v25, v27);
      sub_2316C0(v34);
    }
    v7 = *(_QWORD *)(a1 + 480);
    if ( a2 == v7 )
    {
      v34[0] = *(_QWORD *)(a1 + 480);
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
      v34[0] = v7;
      if ( !v7 )
        goto LABEL_14;
    }
    ++*(_DWORD *)(v7 + 8);
LABEL_14:
    sub_8F15F0((_QWORD *)(a1 + 56), v34);
  }
  return 1;
}

