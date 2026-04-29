unsigned __int64 __fastcall sub_225E40(__int64 a1, int *a2, __int64 *a3, int a4)
{
  __int64 v7; // rax
  __int64 v9; // rbx
  int v10; // esi
  __int64 v11; // rax
  __int64 v12; // rcx
  char v13; // al
  __int64 v14; // rdi
  int v15; // eax
  int v16; // r15d
  __int64 v17; // rcx
  __int64 v18; // r13
  int v19; // r8d
  int v20; // r13d
  int v21; // eax
  __int64 v22; // rdi
  int v23; // eax
  char v24; // al
  __int64 tinfo_property; // rax
  int v27; // edi
  int v28; // esi
  int v29; // esi
  char v30; // al
  char v31; // al
  char v32; // al
  char v33; // al
  int v34; // r12d
  char v35; // al
  char v36; // al
  __int64 v37; // rdi
  int v38; // r8d
  __int64 v39; // rdi
  int v40; // ecx
  char v41; // al
  char v42; // [rsp+0h] [rbp-68h]
  int tinfo_size; // [rsp+0h] [rbp-68h]
  int v44; // [rsp+0h] [rbp-68h]
  int v45; // [rsp+0h] [rbp-68h]
  __int64 v46; // [rsp+8h] [rbp-60h]
  int v47; // [rsp+8h] [rbp-60h]
  int v48; // [rsp+8h] [rbp-60h]
  __int64 v49; // [rsp+18h] [rbp-50h] BYREF
  __int64 v50; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v51; // [rsp+28h] [rbp-40h]

  v7 = *a3;
  v51 = __readfsqword(0x28u);
  v9 = v7 + 24;
  if ( (*(_BYTE *)(a1 + 201) & 4) == 0 && (get_tinfo_property(*(_QWORD *)(a1 + 168), 2) & 0x2F) != 0xD
    || (get_tinfo_property(*(_QWORD *)(v9 + 24), 2) & 0x2F) == 0xD )
  {
    if ( !*(_DWORD *)(v9 + 52) && *(_QWORD *)(v9 + 32) == *(_QWORD *)(a1 + 176) )
    {
      tinfo_property = get_tinfo_property(*(_QWORD *)(v9 + 24), 289);
      v49 = tinfo_property;
      if ( !(_BYTE)tinfo_property
        || (tinfo_property & 0xE) == 0 && (tinfo_property & 0x30) != 0
        || (v50 = get_tinfo_property(tinfo_property, 9),
            v42 = get_tinfo_property(v50, 2),
            clear_tinfo_t(&v50),
            (v42 & 0x3F) == 0x30) )
      {
        clear_tinfo_t(&v49);
        return v51 - __readfsqword(0x28u);
      }
      clear_tinfo_t(&v49);
    }
    v10 = *(_DWORD *)(v9 + 56);
    if ( (v10 & 1) != 0 )
    {
      v11 = *(_QWORD *)(*a3 + 88);
      v12 = v11 + 40LL * *(_QWORD *)(*a3 + 96);
      if ( v12 == v11 )
        return v51 - __readfsqword(0x28u);
      while ( **(_DWORD **)(v11 + 16) == 62 )
      {
        v11 += 40;
        if ( v11 == v12 )
          return v51 - __readfsqword(0x28u);
      }
    }
    if ( (v10 & 0x400) != 0
      || *(_DWORD *)(a1 + 196) != *(_DWORD *)(v9 + 52)
      || (v10 & 2) == 0
      || (v10 & 0x1018) != 0
      || *(_QWORD *)(v9 + 40) != -1
      || (v13 = get_tinfo_property(*(_QWORD *)(v9 + 24), 2), (v13 & 0xFu) > 0xA) && (v13 & 0x3F) != 0x2D )
    {
      v14 = *(_QWORD *)(v9 + 24);
      if ( (_BYTE)v14 )
      {
        v30 = get_tinfo_property(v14, 2);
        v50 = 0;
        if ( (v30 & 0xF) == 0xB )
          v50 = get_tinfo_property(*(_QWORD *)(v9 + 24), 11);
        else
          copy_tinfo_t(&v50, v9 + 24);
        tinfo_size = get_tinfo_size(0, v50, 0);
        clear_tinfo_t(&v50);
        v15 = tinfo_size;
      }
      else
      {
        if ( (*(_BYTE *)(v9 + 56) & 1) == 0 )
          return v51 - __readfsqword(0x28u);
        v15 = *(_DWORD *)(v9 + 52);
      }
      v16 = 0;
      if ( v15 >= 0 )
        v16 = v15;
      if ( v15 > 0 && a4 >= v16 )
      {
        v17 = *(_QWORD *)(v9 + 32);
        v18 = *(_QWORD *)(a1 + 176);
        v19 = v17 - v18;
        if ( (_DWORD)v17 == (_DWORD)v18 )
        {
          if ( (*(_BYTE *)(v9 + 57) & 4) != 0 )
          {
LABEL_26:
            v20 = v16;
LABEL_27:
            *a2 = v20;
            v21 = *(_DWORD *)(a1 + 200);
            if ( (v21 & 2) != 0
              && (v21 & 0x1418) == 0
              && *(_QWORD *)(a1 + 184) == -1
              && ((v35 = get_tinfo_property(*(_QWORD *)(a1 + 168), 2), (v35 & 0xFu) <= 0xA) || (v35 & 0x3F) == 0x2D) )
            {
              v23 = 0;
            }
            else
            {
              v22 = *(_QWORD *)(a1 + 168);
              if ( (_BYTE)v22 )
              {
                v33 = get_tinfo_property(v22, 2);
                v50 = 0;
                if ( (v33 & 0xF) == 0xB )
                  v50 = get_tinfo_property(*(_QWORD *)(a1 + 168), 11);
                else
                  copy_tinfo_t(&v50, a1 + 168);
                v34 = get_tinfo_size(0, v50, 0);
                clear_tinfo_t(&v50);
                v23 = 0;
                if ( v34 >= 0 )
                  v23 = v34;
              }
              else
              {
                v23 = 0;
                if ( (*(_BYTE *)(a1 + 200) & 1) != 0 )
                {
                  v23 = *(_DWORD *)(a1 + 196);
                  if ( v23 < 0 )
                    v23 = 0;
                }
              }
            }
            if ( v20 == v23 && (*(_BYTE *)(v9 + 57) & 4) == 0 )
            {
              v31 = get_tinfo_property(*(_QWORD *)(a1 + 168), 2);
              v50 = 0;
              if ( (v31 & 0xF) == 0xB )
                v50 = get_tinfo_property(*(_QWORD *)(a1 + 168), 11);
              else
                copy_tinfo_t(&v50, a1 + 168);
              v32 = get_tinfo_property(v50, 2);
              if ( (v32 & 0xE) != 0 || (v32 & 0x30) == 0 )
              {
                clear_tinfo_t(&v50);
                return v51 - __readfsqword(0x28u);
              }
              clear_tinfo_t(&v50);
            }
            if ( v20 == v16 )
            {
              v50 = 0;
              copy_tinfo_t(&v50, v9 + 24);
            }
            else
            {
              v24 = get_tinfo_property(*(_QWORD *)(v9 + 24), 2);
              v50 = 0;
              if ( (v24 & 0xF) == 0xB )
                v50 = get_tinfo_property(*(_QWORD *)(v9 + 24), 11);
              else
                copy_tinfo_t(&v50, v9 + 24);
            }
            copy_tinfo_t(a1 + 168, &v50);
            clear_tinfo_t(&v50);
            if ( (*(_BYTE *)(v9 + 57) & 4) != 0 )
              *(_DWORD *)(a1 + 200) |= 0x400u;
            return v51 - __readfsqword(0x28u);
          }
          v46 = *(_QWORD *)(v9 + 32);
          v36 = get_tinfo_property(*(_QWORD *)(v9 + 24), 2);
          v19 = 0;
          LODWORD(v17) = v46;
          if ( (v36 & 0x2F) == 0xD )
          {
            if ( *(_DWORD *)(a1 + 196) == v16 )
              goto LABEL_26;
            v27 = *a2;
            if ( *a2 != v16 )
              goto LABEL_80;
          }
          else
          {
            v27 = *a2;
            if ( v16 != *a2 )
              goto LABEL_80;
          }
        }
        else
        {
          v27 = *a2;
          if ( *a2 != v16 )
            goto LABEL_48;
        }
        v47 = v17;
        v44 = v19;
        if ( (get_tinfo_property(*(_QWORD *)(a1 + 168), 2) & 0xF) == 0xB )
        {
          v37 = *(_QWORD *)(a1 + 168);
          v50 = 0;
          v50 = get_tinfo_property(v37, 11);
          v38 = v44;
          v39 = v50;
          v40 = v47;
        }
        else
        {
          v50 = 0;
          copy_tinfo_t(&v50, a1 + 168);
          v39 = v50;
          v40 = v47;
          v38 = v44;
        }
        v48 = v40;
        v45 = v38;
        v41 = get_tinfo_property(v39, 2);
        if ( (v41 & 0xE) == 0 && (v41 & 0x30) != 0 )
        {
          clear_tinfo_t(&v50);
          goto LABEL_26;
        }
        clear_tinfo_t(&v50);
        v27 = *a2;
        v19 = v45;
        LODWORD(v17) = v48;
LABEL_48:
        if ( v19 % v16 )
        {
          v28 = v18 + *(_DWORD *)(a1 + 196);
          v20 = 1;
          v29 = v28 - v17;
          while ( v20 < v29 && !(v19 % (2 * v20)) )
            v20 *= 2;
LABEL_53:
          if ( v27 && v20 <= v27 )
            return v51 - __readfsqword(0x28u);
          goto LABEL_27;
        }
LABEL_80:
        v20 = v16;
        goto LABEL_53;
      }
    }
  }
  return v51 - __readfsqword(0x28u);
}
