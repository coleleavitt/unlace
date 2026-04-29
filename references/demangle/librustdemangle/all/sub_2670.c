__int64 __fastcall sub_2670(__int64 a1)
{
  int v2; // edi
  unsigned __int64 v4; // rax
  char v5; // bl
  const char *v6; // rax
  unsigned __int64 v7; // rcx
  const char *v8; // rbp
  size_t v9; // rsi
  int v10; // eax
  int v11; // edx
  int v12; // eax
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rbp
  unsigned __int64 v17; // rax
  __int64 v18; // rbx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rbp
  unsigned __int64 v22; // rdx
  __int64 v23; // r15
  int v24; // eax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rsi
  char v34; // dl
  const char *v35; // r15
  unsigned __int64 v36; // r12
  __int64 v37; // rsi
  __int64 v38; // rbp
  bool v39; // zf
  __int64 v40; // rax
  unsigned __int64 v41; // rbx
  char *v42; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v43; // [rsp+8h] [rbp-60h]
  __int64 v44; // [rsp+10h] [rbp-58h]
  unsigned __int64 v45; // [rsp+18h] [rbp-50h]
  unsigned __int64 v46; // [rsp+28h] [rbp-40h]

  v2 = *(_DWORD *)(a1 + 40);
  v46 = __readfsqword(0x28u);
  if ( v2 )
    return v46 - __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 < *(_QWORD *)(a1 + 8) && (v5 = *(_BYTE *)(*(_QWORD *)a1 + v4)) != 0 )
  {
    LOBYTE(v2) = *(_BYTE *)(*(_QWORD *)a1 + v4);
    *(_QWORD *)(a1 + 32) = v4 + 1;
  }
  else
  {
    *(_DWORD *)(a1 + 40) = 1;
    v5 = 0;
  }
  v6 = sub_11E0(v2);
  v8 = v6;
  if ( !v6 )
  {
    v10 = *(_DWORD *)(a1 + 56);
    if ( v10 != -1 )
    {
      *(_DWORD *)(a1 + 56) = v10 + 1;
      if ( (unsigned int)(v10 + 1) > 0x400 )
      {
        *(_DWORD *)(a1 + 40) = 1;
        *(_DWORD *)(a1 + 56) = v10;
        return v46 - __readfsqword(0x28u);
      }
    }
    switch ( v5 )
    {
      case 'A':
      case 'S':
        if ( !*(_QWORD *)(a1 + 40) )
          (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))("[", 1, *(_QWORD *)(a1 + 16));
        sub_2670(a1);
        if ( v5 != 65 )
          goto LABEL_31;
        if ( *(_QWORD *)(a1 + 40) )
        {
          if ( *(_DWORD *)(a1 + 40) )
            goto LABEL_15;
        }
        else
        {
          (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))("; ", 2, *(_QWORD *)(a1 + 16));
          if ( *(_DWORD *)(a1 + 40) )
            goto LABEL_31;
        }
        sub_2200(a1);
LABEL_31:
        if ( !*(_QWORD *)(a1 + 40) )
          (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))("]", 1, *(_QWORD *)(a1 + 16));
        goto LABEL_15;
      case 'B':
        v14 = sub_1430(a1);
        if ( !*(_DWORD *)(a1 + 44) )
        {
          v15 = *(_QWORD *)(a1 + 32);
          *(_QWORD *)(a1 + 32) = v14;
          sub_2670(a1);
          *(_QWORD *)(a1 + 32) = v15;
        }
        goto LABEL_15;
      case 'D':
        if ( !*(_QWORD *)(a1 + 40) )
          (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))("dyn ", 4, *(_QWORD *)(a1 + 16));
        v21 = *(_QWORD *)(a1 + 64);
        if ( *(_DWORD *)(a1 + 40) )
          goto LABEL_65;
        sub_1890(a1);
        if ( *(_DWORD *)(a1 + 40) )
          goto LABEL_65;
        v22 = *(_QWORD *)(a1 + 32);
        v23 = 0;
        while ( 1 )
        {
          v25 = *(_QWORD *)(a1 + 8);
          if ( v22 < v25 && *(_BYTE *)(*(_QWORD *)a1 + v22) == 69 )
            break;
          if ( v23 && !*(_QWORD *)(a1 + 40) )
            (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))(" + ", 3, *(_QWORD *)(a1 + 16));
          if ( *(_DWORD *)(a1 + 40) )
          {
LABEL_65:
            v22 = *(_QWORD *)(a1 + 32);
LABEL_66:
            v25 = *(_QWORD *)(a1 + 8);
            goto LABEL_67;
          }
          v24 = sub_36D0(a1);
          v22 = *(_QWORD *)(a1 + 32);
          if ( v22 < *(_QWORD *)(a1 + 8) )
          {
            while ( *(_BYTE *)(*(_QWORD *)a1 + v22) == 112 )
            {
              *(_QWORD *)(a1 + 32) = v22 + 1;
              v28 = *(_QWORD *)(a1 + 40);
              if ( v24 )
              {
                if ( !v28 )
                  (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))(", ", 2, *(_QWORD *)(a1 + 16));
              }
              else if ( !v28 )
              {
                (*(void (__fastcall **)(char *, __int64, _QWORD))(a1 + 24))("<", 1, *(_QWORD *)(a1 + 16));
              }
              sub_1530((unsigned __int64 *)&v42, (__int64 *)a1);
              sub_1A50(a1, a1, v29, v30, v31, v32, v42, v43, v44, v45);
              if ( !*(_QWORD *)(a1 + 40) )
                (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))(" = ", 3, *(_QWORD *)(a1 + 16));
              sub_2670(a1);
              v22 = *(_QWORD *)(a1 + 32);
              v24 = 1;
              if ( v22 >= *(_QWORD *)(a1 + 8) )
                goto LABEL_90;
            }
          }
          if ( v24 )
          {
LABEL_90:
            if ( !*(_QWORD *)(a1 + 40) )
            {
              (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))(">", 1, *(_QWORD *)(a1 + 16));
              v22 = *(_QWORD *)(a1 + 32);
            }
          }
          ++v23;
          if ( *(_DWORD *)(a1 + 40) )
            goto LABEL_66;
        }
        *(_QWORD *)(a1 + 32) = ++v22;
LABEL_67:
        *(_QWORD *)(a1 + 64) = v21;
        if ( v25 <= v22 || *(_BYTE *)(*(_QWORD *)a1 + v22) != 76 )
        {
          *(_DWORD *)(a1 + 40) = 1;
          return v46 - __readfsqword(0x28u);
        }
        *(_QWORD *)(a1 + 32) = v22 + 1;
        v38 = sub_1430(a1);
        if ( v38 )
        {
          if ( !*(_QWORD *)(a1 + 40) )
            sub_1350(
              *(_QWORD *)(a1 + 16),
              *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 24),
              (__int64)" + ",
              3);
          sub_1740(a1, v38);
        }
        goto LABEL_15;
      case 'F':
        v16 = *(_QWORD *)(a1 + 64);
        if ( !*(_DWORD *)(a1 + 40) )
        {
          sub_1890(a1);
          v7 = *(_QWORD *)(a1 + 8);
        }
        v17 = *(_QWORD *)(a1 + 32);
        if ( v17 >= v7 )
          goto LABEL_38;
        v33 = *(_QWORD *)a1;
        v34 = *(_BYTE *)(*(_QWORD *)a1 + v17);
        if ( v34 != 85 )
          goto LABEL_108;
        ++v17;
        v39 = *(_QWORD *)(a1 + 40) == 0;
        *(_QWORD *)(a1 + 32) = v17;
        if ( v39 )
        {
          (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))("unsafe ", 7, *(_QWORD *)(a1 + 16));
          v17 = *(_QWORD *)(a1 + 32);
          v7 = *(_QWORD *)(a1 + 8);
        }
        if ( v17 >= v7 )
          goto LABEL_38;
        v33 = *(_QWORD *)a1;
        v34 = *(_BYTE *)(*(_QWORD *)a1 + v17);
LABEL_108:
        if ( v34 != 75 )
          goto LABEL_38;
        *(_QWORD *)(a1 + 32) = v17 + 1;
        if ( v17 + 1 < v7 && *(_BYTE *)(v33 + v17 + 1) == 67 )
        {
          v39 = *(_QWORD *)(a1 + 40) == 0;
          *(_QWORD *)(a1 + 32) = v17 + 2;
          if ( v39 )
            sub_1350(
              *(_QWORD *)(a1 + 16),
              *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 24),
              (__int64)"extern \"",
              8);
          v40 = *(_QWORD *)(a1 + 40);
          v35 = "C";
          v36 = 1;
        }
        else
        {
          sub_1530((unsigned __int64 *)&v42, (__int64 *)a1);
          v35 = v42;
          v36 = v43;
          if ( !v42 || v44 )
          {
            *(_DWORD *)(a1 + 40) = 1;
LABEL_51:
            *(_QWORD *)(a1 + 64) = v16;
LABEL_15:
            v12 = *(_DWORD *)(a1 + 56);
            if ( v12 != -1 )
              *(_DWORD *)(a1 + 56) = v12 - 1;
            return v46 - __readfsqword(0x28u);
          }
          if ( *(_QWORD *)(a1 + 40) )
          {
            v40 = *(_QWORD *)(a1 + 40);
            if ( !v43 )
              goto LABEL_40;
          }
          else
          {
            sub_1350(
              *(_QWORD *)(a1 + 16),
              *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 24),
              (__int64)"extern \"",
              8);
            v40 = *(_QWORD *)(a1 + 40);
            if ( !v36 )
              goto LABEL_142;
          }
        }
        v41 = 0;
        do
        {
          if ( v35[v41] == 95 )
          {
            if ( !v40 )
            {
              (*(void (__fastcall **)(const char *, unsigned __int64, _QWORD))(a1 + 24))(v35, v41, *(_QWORD *)(a1 + 16));
              v40 = *(_QWORD *)(a1 + 40);
              if ( !v40 )
              {
                (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))("-", 1, *(_QWORD *)(a1 + 16));
                v40 = *(_QWORD *)(a1 + 40);
              }
            }
            v35 += v41 + 1;
            v36 = v36 - 1 - v41;
            v41 = 1;
          }
          else
          {
            ++v41;
          }
        }
        while ( v41 < v36 );
LABEL_142:
        if ( !*(_QWORD *)(a1 + 40) )
        {
          sub_1350(
            *(_QWORD *)(a1 + 16),
            *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 24),
            (__int64)v35,
            v36);
          if ( !*(_QWORD *)(a1 + 40) )
          {
            sub_1350(
              *(_QWORD *)(a1 + 16),
              *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 24),
              (__int64)"\" ",
              2);
LABEL_38:
            if ( !*(_QWORD *)(a1 + 40) )
              (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))("fn(", 3, *(_QWORD *)(a1 + 16));
          }
        }
LABEL_40:
        v18 = 0;
        if ( !*(_DWORD *)(a1 + 40) )
        {
          while ( 1 )
          {
            v19 = *(_QWORD *)(a1 + 32);
            if ( v19 < *(_QWORD *)(a1 + 8) && *(_BYTE *)(*(_QWORD *)a1 + v19) == 69 )
              break;
            if ( v18 && !*(_QWORD *)(a1 + 40) )
              (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))(", ", 2, *(_QWORD *)(a1 + 16));
            ++v18;
            sub_2670(a1);
            if ( *(_DWORD *)(a1 + 40) )
              goto LABEL_46;
          }
          *(_QWORD *)(a1 + 32) = v19 + 1;
        }
LABEL_46:
        if ( *(_QWORD *)(a1 + 40) )
        {
          v20 = *(_QWORD *)(a1 + 32);
          if ( *(_QWORD *)(a1 + 8) > v20 && *(_BYTE *)(*(_QWORD *)a1 + v20) == 117 )
            goto LABEL_101;
        }
        else
        {
          (*(void (__fastcall **)(char *, __int64, _QWORD))(a1 + 24))(")", 1, *(_QWORD *)(a1 + 16));
          v20 = *(_QWORD *)(a1 + 32);
          if ( v20 < *(_QWORD *)(a1 + 8) && *(_BYTE *)(*(_QWORD *)a1 + v20) == 117 )
          {
LABEL_101:
            *(_QWORD *)(a1 + 32) = v20 + 1;
            goto LABEL_51;
          }
          if ( !*(_QWORD *)(a1 + 40) )
            (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))(" -> ", 4, *(_QWORD *)(a1 + 16));
        }
        sub_2670(a1);
        goto LABEL_51;
      case 'O':
      case 'P':
        if ( *(_QWORD *)(a1 + 40) )
          goto LABEL_23;
        (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))("*", 1, *(_QWORD *)(a1 + 16));
        if ( v5 != 80 )
          goto LABEL_21;
        if ( !*(_QWORD *)(a1 + 40) )
          (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))("const ", 6, *(_QWORD *)(a1 + 16));
        goto LABEL_23;
      case 'Q':
      case 'R':
        if ( !*(_QWORD *)(a1 + 40) )
        {
          (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))("&", 1, *(_QWORD *)(a1 + 16));
          v7 = *(_QWORD *)(a1 + 8);
        }
        v13 = *(_QWORD *)(a1 + 32);
        if ( v7 <= v13 )
          goto LABEL_20;
        if ( *(_BYTE *)(*(_QWORD *)a1 + v13) != 76 )
          goto LABEL_20;
        *(_QWORD *)(a1 + 32) = v13 + 1;
        v37 = sub_1430(a1);
        if ( !v37 )
          goto LABEL_20;
        sub_1740(a1, v37);
        if ( !*(_QWORD *)(a1 + 40) )
        {
          sub_1350(
            *(_QWORD *)(a1 + 16),
            *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 24),
            (__int64)" ",
            1);
LABEL_20:
          if ( v5 != 82 )
          {
LABEL_21:
            if ( !*(_QWORD *)(a1 + 40) )
              (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))("mut ", 4, *(_QWORD *)(a1 + 16));
          }
        }
LABEL_23:
        sub_2670(a1);
        goto LABEL_15;
      case 'T':
        if ( *(_QWORD *)(a1 + 40) )
        {
          if ( *(_DWORD *)(a1 + 40) )
            goto LABEL_15;
        }
        else
        {
          (*(void (__fastcall **)(char *, __int64, _QWORD))(a1 + 24))("(", 1, *(_QWORD *)(a1 + 16));
          if ( *(_DWORD *)(a1 + 40) )
            goto LABEL_81;
          v7 = *(_QWORD *)(a1 + 8);
        }
        v26 = *(_QWORD *)(a1 + 32);
        v27 = 0;
        if ( v26 >= v7 )
          goto LABEL_73;
LABEL_78:
        if ( *(_BYTE *)(*(_QWORD *)a1 + v26) == 69 )
        {
          *(_QWORD *)(a1 + 32) = v26 + 1;
        }
        else
        {
          while ( 1 )
          {
LABEL_73:
            if ( v27 && !*(_QWORD *)(a1 + 40) )
              (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))(", ", 2, *(_QWORD *)(a1 + 16));
            ++v27;
            sub_2670(a1);
            if ( *(_DWORD *)(a1 + 40) )
              break;
            v26 = *(_QWORD *)(a1 + 32);
            if ( v26 < *(_QWORD *)(a1 + 8) )
              goto LABEL_78;
          }
        }
        if ( v27 == 1 )
        {
          if ( *(_QWORD *)(a1 + 40) )
            goto LABEL_15;
          (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))(",", 1, *(_QWORD *)(a1 + 16));
        }
LABEL_81:
        if ( !*(_QWORD *)(a1 + 40) )
          (*(void (__fastcall **)(char *, __int64, _QWORD))(a1 + 24))(")", 1, *(_QWORD *)(a1 + 16));
        goto LABEL_15;
      default:
        v11 = *(_DWORD *)(a1 + 40);
        --*(_QWORD *)(a1 + 32);
        if ( !v11 )
          sub_3070(a1, 0);
        goto LABEL_15;
    }
  }
  v9 = strlen(v6);
  if ( *(_QWORD *)(a1 + 40) )
    return v46 - __readfsqword(0x28u);
  return (*(__int64 (__fastcall **)(const char *, size_t, _QWORD))(a1 + 24))(v8, v9, *(_QWORD *)(a1 + 16));
}
