__int64 __fastcall sub_3F7A20(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        int a10,
        __int64 a11)
{
  unsigned int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rbx
  _DWORD *v16; // rdx
  unsigned int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // r10
  __int64 v22; // rsi
  __int64 v23; // rdi
  _QWORD *v24; // rdx
  unsigned int v25; // edx
  __int64 v26; // rcx
  __int64 v27; // rsi
  _QWORD *v28; // rbx
  __int64 *v29; // rcx
  __int64 v30; // rbp
  int v31; // r12d
  unsigned int v32; // edx
  __int64 *v33; // rcx
  _DWORD **v34; // rdx
  _QWORD *v35; // rcx
  __int64 *v36; // rdx
  __int64 *v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __m128 v40; // xmm4
  __m128 v41; // xmm5
  _QWORD *v42; // rdi
  __int64 v43; // rax
  __int64 (__fastcall **v44)(); // [rsp+0h] [rbp-68h] BYREF
  __int64 v45; // [rsp+8h] [rbp-60h]
  __int64 v46; // [rsp+10h] [rbp-58h]
  __int128 v47; // [rsp+18h] [rbp-50h]
  __int64 v48; // [rsp+28h] [rbp-40h]
  __int128 v49; // [rsp+30h] [rbp-38h]
  unsigned __int64 v50; // [rsp+48h] [rbp-20h]

  v50 = __readfsqword(0x28u);
  if ( a10 != 12 )
  {
    if ( a10 <= 12 )
    {
      if ( a10 == 4 )
      {
        v32 = *(_DWORD *)a11;
        if ( v32 > 0x2F )
        {
          v33 = *(__int64 **)(a11 + 8);
          *(_QWORD *)(a11 + 8) = v33 + 1;
        }
        else
        {
          v33 = (__int64 *)(*(_QWORD *)(a11 + 16) + v32);
          *(_DWORD *)a11 = v32 + 8;
        }
        sub_30F800(*v33);
      }
      else if ( a10 == 10 )
      {
        v12 = *(_DWORD *)a11;
        if ( *(_DWORD *)a11 > 0x2Fu )
        {
          v35 = *(_QWORD **)(a11 + 8);
          v16 = v35 + 1;
          *(_QWORD *)(a11 + 8) = v35 + 1;
          v15 = *v35;
        }
        else
        {
          v13 = *(_QWORD *)(a11 + 16);
          v14 = v12 + 8;
          *(_DWORD *)a11 = v14;
          v15 = *(_QWORD *)(v13 + v12);
          if ( (unsigned int)v14 <= 0x2F )
          {
            v16 = (_DWORD *)(v14 + v13);
            *(_DWORD *)a11 = v12 + 16;
            goto LABEL_8;
          }
          v16 = *(_DWORD **)(a11 + 8);
        }
        *(_QWORD *)(a11 + 8) = v16 + 2;
LABEL_8:
        if ( *v16 == 3 )
        {
          v44 = (__int64 (__fastcall **)())&off_4E9A18;
          LODWORD(v45) = 0;
          v46 = 0;
          v48 = 0;
          v47 = 0;
          v49 = 0;
          sub_255A80((__int64 *)&v44, v15 + 16, 0);
          v44 = off_4DBCF8;
          if ( v48 )
          {
            *(_QWORD *)&v49 = 0;
            qfree();
          }
          if ( v46 )
          {
            *(_QWORD *)&v47 = 0;
            qfree();
          }
          v42 = *(_QWORD **)(v15 + 8);
          v43 = *(int *)(v42[188] + 3780LL);
          if ( (_DWORD)v43 != -1 )
            sub_3311F0(
              v42,
              0xFFFFFFFFFFFFFFFFLL,
              0x23u,
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v42[187] + 8LL) + 56LL) + 8 * v43),
              v38,
              v39,
              (__m128)0LL,
              a2,
              a3,
              a4,
              v40,
              v41,
              a7,
              a8);
        }
      }
      return 0;
    }
    if ( a10 != 110 )
      return 0;
    v18 = *(_DWORD *)a11;
    if ( *(_DWORD *)a11 > 0x2Fu )
    {
      v36 = *(__int64 **)(a11 + 8);
      v37 = v36 + 1;
      *(_QWORD *)(a11 + 8) = v36 + 1;
      v21 = *v36;
    }
    else
    {
      v19 = *(_QWORD *)(a11 + 16);
      v20 = v18 + 8;
      *(_DWORD *)a11 = v20;
      v21 = *(_QWORD *)(v19 + v18);
      if ( (unsigned int)v20 <= 0x2F )
      {
        v22 = v18 + 16;
        *(_DWORD *)a11 = v22;
        v23 = *(_QWORD *)(v19 + v20);
        if ( (unsigned int)v22 <= 0x2F )
        {
          v24 = (_QWORD *)(v22 + v19);
          *(_DWORD *)a11 = v18 + 24;
          goto LABEL_15;
        }
        v24 = *(_QWORD **)(a11 + 8);
LABEL_37:
        *(_QWORD *)(a11 + 8) = v24 + 1;
LABEL_15:
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v24 + 24LL) + 920LL) + 176LL) & 0x40) != 0 )
          callui(131, v21, v23, "hx:ToggleSSEIntrinsics", 0, 0, v44, v45, v46, v47);
        return 0;
      }
      v37 = *(__int64 **)(a11 + 8);
    }
    v24 = v37 + 1;
    *(_QWORD *)(a11 + 8) = v37 + 1;
    v23 = *v37;
    goto LABEL_37;
  }
  v25 = *(_DWORD *)a11;
  if ( v25 > 0x2F )
  {
    v34 = *(_DWORD ***)(a11 + 8);
    v29 = (__int64 *)(v34 + 1);
    *(_QWORD *)(a11 + 8) = v34 + 1;
    v28 = *v34;
    if ( *(int *)(*((_QWORD *)*v34 + 8) + 312LL) <= 1 )
      return 0;
    goto LABEL_32;
  }
  v26 = *(_QWORD *)(a11 + 16);
  v27 = v25 + 8;
  *(_DWORD *)a11 = v27;
  v28 = *(_QWORD **)(v26 + v25);
  if ( *(int *)(v28[8] + 312LL) <= 1 )
    return 0;
  if ( (unsigned int)v27 > 0x2F )
  {
    v29 = *(__int64 **)(a11 + 8);
LABEL_32:
    *(_QWORD *)(a11 + 8) = v29 + 1;
    goto LABEL_21;
  }
  v29 = (__int64 *)(v27 + v26);
  *(_DWORD *)a11 = v25 + 16;
LABEL_21:
  v30 = *v29;
  if ( !*(_QWORD *)(*v29 + 16) || !sub_3F7940((_DWORD *)*v29, 139) || !sub_3F7940(*(_DWORD **)(v30 + 16), 148) )
    return 0;
  v31 = sub_3EACF0(*(_QWORD *)(v30 + 16));
  if ( (int)(sub_3EACF0(v30) + v31) > 0 )
    *((_DWORD *)v28 + 6) |= 0x100u;
  return 1;
}
