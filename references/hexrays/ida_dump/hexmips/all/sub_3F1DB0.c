unsigned __int64 __fastcall sub_3F1DB0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rcx
  __int16 v4; // r13
  __int64 v5; // rax
  int v6; // edx
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // r15d
  __int64 v11; // rax
  char v12; // al
  unsigned int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // edx
  char v17; // al
  _DWORD *v18; // rdi
  __int64 (__fastcall *v19)(_DWORD *, unsigned int); // rax
  signed int v20; // r15d
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r12
  char v24; // al
  signed int v25; // ebp
  __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // edx
  char v29; // al
  _DWORD *v30; // rdi
  __int64 (__fastcall *v31)(_DWORD *, unsigned int); // rax
  signed int v32; // r15d
  __int64 v33; // rax
  int v34; // esi
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  int v38; // edx
  signed int v40; // eax
  signed int v41; // eax
  int v42; // ecx
  __int64 v43; // [rsp+0h] [rbp-98h]
  __int64 v44; // [rsp+8h] [rbp-90h]
  __int64 v45; // [rsp+10h] [rbp-88h]
  int v46; // [rsp+18h] [rbp-80h]
  int v47; // [rsp+1Ch] [rbp-7Ch]
  int v48; // [rsp+1Ch] [rbp-7Ch]
  __int64 v49; // [rsp+20h] [rbp-78h] BYREF
  int v50; // [rsp+28h] [rbp-70h]
  __int64 v51; // [rsp+2Ch] [rbp-6Ch]
  __int64 v52; // [rsp+40h] [rbp-58h] BYREF
  int v53; // [rsp+48h] [rbp-50h]
  __int64 v54; // [rsp+4Ch] [rbp-4Ch]
  unsigned __int64 v55; // [rsp+58h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 832);
  v4 = *(_WORD *)(a1 + 48);
  v55 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(v3 + 760);
  if ( !v5
    || (v6 = a2,
        a2 = *(unsigned int *)(*(_QWORD *)(v3 + 752) + 4 * v5 - 4),
        *(_QWORD *)(v3 + 760) = v5 - 1,
        v8 = *(_QWORD *)(a1 + 832),
        v46 = a2,
        (v9 = *(_QWORD *)(v8 + 760)) == 0) )
  {
    sub_3E5460(a3, a1, a2);
  }
  v10 = *(_DWORD *)(*(_QWORD *)(v8 + 752) + 4 * v9 - 4);
  *(_QWORD *)(v8 + 760) = v9 - 1;
  v11 = *(_QWORD *)(a1 + 88);
  v51 = 0x200000000LL;
  v49 = v11;
  v45 = v6;
  if ( v11 )
  {
    if ( (v11 & 0xFFFFFFFFFFFFFF0FLL) == 0 )
    {
      v50 = 8;
      v12 = sub_3E8180(&v49);
      v13 = v50;
      if ( v12 )
      {
        v14 = *(_QWORD *)(a1 + 832);
        v15 = *(int *)(v14 + 60);
        v16 = *(_DWORD *)(v14 + 84);
        if ( v4 == 544 )
          sub_1D1F50(a1, 4u, v16, v15, 0x3BEA45E214ADDC55LL, (int)a2, 0);
        else
          sub_1D1F50(a1, 0xCu, v16, v15, v45, (int)a2, 0);
        sub_3EC710(a1, 16, 0, v10, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL));
        v44 = v10;
        sub_1D1F50(a1, 0xCu, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL), (int)a2, v10, (int)a2, 0);
        sub_3EC710(a1, 4, 0, v10, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL));
        v47 = v10;
        do
        {
          v18 = *(_DWORD **)(a1 + 832);
          v19 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v18 + 168LL);
          if ( v19 == sub_3E5480 )
          {
            v20 = sub_3E5480(v18, v13);
          }
          else
          {
            v40 = v19(v18, v13);
            v18 = *(_DWORD **)(a1 + 832);
            v20 = v40;
          }
          sub_1D1F50(a1, 0xDu, v18[21], (int)a2, v44, (int)a2, 0);
          v21 = *(_QWORD *)(a1 + 832);
          if ( v4 == 544 )
          {
            sub_3EAB70(a1, 1u, 4, v20, *(int *)(v21 + 64), (int)a2, *(_DWORD *)(v21 + 84));
          }
          else
          {
            sub_3EAB70(a1, 2u, 4, *(int *)(v21 + 64), (int)a2, v20, *(_DWORD *)(v21 + 84));
            sub_3EE280(a1, 4u, v20);
          }
          v50 = v13;
          v17 = sub_3E8180(&v49);
          v13 = v50;
        }
        while ( v17 );
        v10 = v47;
      }
    }
  }
  v22 = sub_CBD70(0xBC7u);
  v23 = *(_QWORD *)(a1 + 168);
  if ( v22 == 2 )
  {
    v52 = *(_QWORD *)(a1 + 168);
    v54 = 0x400000000LL;
    if ( !v23 )
      goto LABEL_30;
    if ( (~(_DWORD)v23 & 0x80010000) != 0 )
    {
      v25 = bitcountr_zero(v23);
      if ( v25 > 63 )
      {
        v25 = -1;
      }
      else if ( v25 == 28 && (v23 & 0x10000000) != 0 && (v23 & 0x28000000) == 0 )
      {
        if ( (v23 & 0x40000000) != 0 )
        {
          v25 = 30;
        }
        else if ( (int)v23 < 0 )
        {
          v25 = 31;
        }
      }
    }
    else
    {
      v42 = 30;
      while ( (v23 & (1LL << v42)) != 0 )
      {
        if ( --v42 == 0x7FFFFFFF )
        {
          v25 = 0x80000000;
          goto LABEL_20;
        }
      }
      v25 = v42 + 1;
    }
  }
  else
  {
    v52 = *(_QWORD *)(a1 + 168);
    v54 = 0x300000000LL;
    if ( !v23 )
      goto LABEL_30;
    if ( (v23 & 0xFFFFFFFF3F00FF0FLL) != 0 )
      goto LABEL_30;
    v53 = 32;
    v24 = sub_3E8180(&v52);
    v25 = v53;
    if ( !v24 )
      goto LABEL_30;
  }
LABEL_20:
  v26 = *(_QWORD *)(a1 + 832);
  v27 = *(int *)(v26 + 60);
  v28 = *(_DWORD *)(v26 + 84);
  if ( v4 == 544 )
    sub_1D1F50(a1, 4u, v28, v27, 0x3BEA45E214ADDC55LL, (int)a2, 0);
  else
    sub_1D1F50(a1, 0xCu, v28, v27, v45, (int)a2, 0);
  sub_3EC710(a1, 4, 2, v10, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL));
  v48 = v10;
  v43 = v10;
  do
  {
    v30 = *(_DWORD **)(a1 + 832);
    v31 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v30 + 168LL);
    if ( v31 == sub_3E5480 )
    {
      v32 = sub_3E5480(v30, v25);
    }
    else
    {
      v41 = v31(v30, v25);
      v30 = *(_DWORD **)(a1 + 832);
      v32 = v41;
    }
    sub_1D1F50(a1, 0xDu, v30[21], v46, v43, v46, 0);
    v33 = *(_QWORD *)(a1 + 832);
    v34 = *(_DWORD *)(v33 + 84);
    v35 = *(int *)(v33 + 64);
    if ( v4 == 544 )
    {
      sub_3EAB70(a1, 1u, 4, v32, v35, v46, v34);
    }
    else
    {
      sub_3EAB70(a1, 2u, 4, v35, v46, v32, v34);
      sub_3EE280(a1, 4u, v32);
    }
    v53 = v25;
    v29 = sub_3E8180(&v52);
    v25 = v53;
  }
  while ( v29 );
  v10 = v48;
LABEL_30:
  sub_3E8540(*(_QWORD *)(a1 + 832), v46);
  sub_3E8540(*(_QWORD *)(a1 + 832), v10);
  v36 = *(_QWORD *)(a1 + 832);
  v37 = *(int *)(v36 + 60);
  v38 = *(_DWORD *)(v36 + 84);
  if ( v4 == 544 )
  {
    sub_1D1F50(a1, 0xDu, v38, v37, v45, *(int *)(v36 + 60), 0);
    return sub_3EE280(a1, *(int *)(*(_QWORD *)(a1 + 832) + 84LL), *(_DWORD *)(*(_QWORD *)(a1 + 832) + 60LL));
  }
  else
  {
    sub_1D1F50(a1, 0xCu, v38, v37, v45, *(int *)(v36 + 60), 0);
    sub_3EE280(a1, *(int *)(*(_QWORD *)(a1 + 832) + 84LL), *(_DWORD *)(*(_QWORD *)(a1 + 832) + 60LL));
    if ( v4 == 1738 )
      sub_3EAB70(
        a1,
        0x3Au,
        *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL),
        0x3BEA45E214ADDC55LL,
        0x3BEA45E214ADDC55LL,
        0x3BEA45E214ADDC55LL,
        *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL));
    return v55 - __readfsqword(0x28u);
  }
}
