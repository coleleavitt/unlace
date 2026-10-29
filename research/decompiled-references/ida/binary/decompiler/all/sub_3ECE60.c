__int64 __fastcall sub_3ECE60(__int64 a1, int a2, __int64 a3)
{
  unsigned int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rbx
  _DWORD *v8; // rdx
  unsigned int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // r10
  __int64 v14; // rsi
  __int64 v15; // rdi
  _QWORD *v16; // rdx
  unsigned int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rsi
  _QWORD *v20; // rbx
  __int64 *v21; // rcx
  __int64 v22; // rbp
  int v23; // r12d
  unsigned int v24; // edx
  _QWORD *v25; // rcx
  _DWORD **v26; // rdx
  _QWORD *v27; // rcx
  __int64 *v28; // rdx
  __int64 *v29; // rcx
  int v30; // r8d
  int v31; // r9d
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 (__fastcall **v34)(); // [rsp+0h] [rbp-68h] BYREF
  __int64 v35; // [rsp+8h] [rbp-60h]
  __int64 v36; // [rsp+10h] [rbp-58h]
  __int128 v37; // [rsp+18h] [rbp-50h]
  __int64 v38; // [rsp+28h] [rbp-40h]
  __int128 v39; // [rsp+30h] [rbp-38h]
  unsigned __int64 v40; // [rsp+48h] [rbp-20h]

  v40 = __readfsqword(0x28u);
  if ( a2 != 12 )
  {
    if ( a2 <= 12 )
    {
      if ( a2 == 4 )
      {
        v24 = *(_DWORD *)a3;
        if ( v24 > 0x2F )
        {
          v25 = *(_QWORD **)(a3 + 8);
          *(_QWORD *)(a3 + 8) = v25 + 1;
        }
        else
        {
          v25 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v24);
          *(_DWORD *)a3 = v24 + 8;
        }
        sub_30C270(*v25);
      }
      else if ( a2 == 10 )
      {
        v4 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v27 = *(_QWORD **)(a3 + 8);
          v8 = v27 + 1;
          *(_QWORD *)(a3 + 8) = v27 + 1;
          v7 = *v27;
        }
        else
        {
          v5 = *(_QWORD *)(a3 + 16);
          v6 = v4 + 8;
          *(_DWORD *)a3 = v6;
          v7 = *(_QWORD *)(v5 + v4);
          if ( (unsigned int)v6 <= 0x2F )
          {
            v8 = (_DWORD *)(v6 + v5);
            *(_DWORD *)a3 = v4 + 16;
            goto LABEL_8;
          }
          v8 = *(_DWORD **)(a3 + 8);
        }
        *(_QWORD *)(a3 + 8) = v8 + 2;
LABEL_8:
        if ( *v8 == 3 )
        {
          v34 = (__int64 (__fastcall **)())&off_4E8A98;
          LODWORD(v35) = 0;
          v36 = 0;
          v38 = 0;
          v37 = 0;
          v39 = 0;
          sub_252FA0(&v34, v7 + 16, 0);
          v34 = off_4DB4D0;
          if ( v38 )
          {
            *(_QWORD *)&v39 = 0;
            qfree();
          }
          if ( v36 )
          {
            *(_QWORD *)&v37 = 0;
            qfree();
          }
          v32 = *(_QWORD *)(v7 + 8);
          v33 = *(int *)(*(_QWORD *)(v32 + 1504) + 3780LL);
          if ( (_DWORD)v33 != -1 )
            sub_32DD50(
              v32,
              -1,
              35,
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v32 + 1496) + 8LL) + 56LL) + 8 * v33),
              v30,
              v31);
        }
      }
      return 0;
    }
    if ( a2 != 110 )
      return 0;
    v10 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 > 0x2Fu )
    {
      v28 = *(__int64 **)(a3 + 8);
      v29 = v28 + 1;
      *(_QWORD *)(a3 + 8) = v28 + 1;
      v13 = *v28;
    }
    else
    {
      v11 = *(_QWORD *)(a3 + 16);
      v12 = v10 + 8;
      *(_DWORD *)a3 = v12;
      v13 = *(_QWORD *)(v11 + v10);
      if ( (unsigned int)v12 <= 0x2F )
      {
        v14 = v10 + 16;
        *(_DWORD *)a3 = v14;
        v15 = *(_QWORD *)(v11 + v12);
        if ( (unsigned int)v14 <= 0x2F )
        {
          v16 = (_QWORD *)(v14 + v11);
          *(_DWORD *)a3 = v10 + 24;
          goto LABEL_15;
        }
        v16 = *(_QWORD **)(a3 + 8);
LABEL_37:
        *(_QWORD *)(a3 + 8) = v16 + 1;
LABEL_15:
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v16 + 24LL) + 920LL) + 176LL) & 0x40) != 0 )
          callui(131, v13, v15, "hx:ToggleSSEIntrinsics", 0, 0, v34, v35, v36, v37);
        return 0;
      }
      v29 = *(__int64 **)(a3 + 8);
    }
    v16 = v29 + 1;
    *(_QWORD *)(a3 + 8) = v29 + 1;
    v15 = *v29;
    goto LABEL_37;
  }
  v17 = *(_DWORD *)a3;
  if ( v17 > 0x2F )
  {
    v26 = *(_DWORD ***)(a3 + 8);
    v21 = (__int64 *)(v26 + 1);
    *(_QWORD *)(a3 + 8) = v26 + 1;
    v20 = *v26;
    if ( *(int *)(*((_QWORD *)*v26 + 8) + 312LL) <= 1 )
      return 0;
    goto LABEL_32;
  }
  v18 = *(_QWORD *)(a3 + 16);
  v19 = v17 + 8;
  *(_DWORD *)a3 = v19;
  v20 = *(_QWORD **)(v18 + v17);
  if ( *(int *)(v20[8] + 312LL) <= 1 )
    return 0;
  if ( (unsigned int)v19 > 0x2F )
  {
    v21 = *(__int64 **)(a3 + 8);
LABEL_32:
    *(_QWORD *)(a3 + 8) = v21 + 1;
    goto LABEL_21;
  }
  v21 = (__int64 *)(v19 + v18);
  *(_DWORD *)a3 = v17 + 16;
LABEL_21:
  v22 = *v21;
  if ( !*(_QWORD *)(*v21 + 16) || !sub_3ECD80((_DWORD *)*v21, 139) || !sub_3ECD80(*(_DWORD **)(v22 + 16), 148) )
    return 0;
  v23 = sub_3E0080(*(_QWORD *)(v22 + 16));
  if ( (int)(sub_3E0080(v22) + v23) > 0 )
    *((_DWORD *)v20 + 6) |= 0x100u;
  return 1;
}
