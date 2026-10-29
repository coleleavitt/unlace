__int64 __fastcall sub_F2B950(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // al
  __int64 v5; // r12
  char *v8; // rax
  __int64 result; // rax
  __int64 v10; // r14
  char *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdi
  const char *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // r12
  const char *v19; // rax
  const char *v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // r12
  const char *v25; // rax
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 i; // r12
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // r12
  const char *v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rdi
  __int64 v37; // r12
  __int64 v38; // r14
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // r13
  __int64 v44; // r14
  __int64 v45; // r12
  __int64 v46; // rax
  __int64 v47; // r12
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax

  v4 = *(_BYTE *)(a1 + 1104);
  v5 = *(_QWORD *)(a1 + 1096);
  if ( a2 )
  {
    if ( v4 )
    {
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 24LL))(*(_QWORD *)(a1 + 1096), 4, 0, 0);
      v10 = *(_QWORD *)(a1 + 1096);
      v11 = sub_B3A4D0(a2);
      sub_995540(v10, v11);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
    }
    else
    {
      v8 = sub_B3A4D0(a2);
      sub_995540(v5, v8);
    }
    sub_F29AE0(a1, a2);
    sub_F2A050(a1, *(_QWORD *)(a2 + 4));
    result = *(unsigned __int8 *)(a2 + 12);
    switch ( *(_BYTE *)(a2 + 12) )
    {
      case 0:
      case 0xC:
        return sub_F2B6E0(a1, a2, a3);
      case 1:
      case 2:
        v14 = *(_QWORD *)(a1 + 1096);
        v15 = " Text=\"";
        goto LABEL_10;
      case 3:
        v33 = sub_995540(*(_QWORD *)(a1 + 1096), " Name=\"");
        v34 = sub_F2B1F0(a1, *(_DWORD *)(a2 + 12) >> 12);
        v35 = sub_995540(v33, v34);
        sub_995540(v35, "\"");
        v36 = *(_QWORD *)(a1 + 1096);
        switch ( (*(_BYTE *)(a2 + 13) >> 1) & 7 )
        {
          case 0:
            sub_995540(v36, " RenderNormal");
            break;
          case 1:
            sub_995540(v36, " RenderBold");
            break;
          case 2:
            sub_995540(v36, " RenderMonospaced");
            break;
          case 3:
            sub_995540(v36, " RenderEmphasized");
            break;
          case 4:
            sub_995540(v36, " RenderAnchor");
            break;
          default:
            break;
        }
        result = *(_QWORD *)(a2 + 24);
        v37 = 0;
        v38 = (unsigned int)(result - 1);
        if ( (_DWORD)result )
        {
          while ( 1 )
          {
            v39 = sub_995540(*(_QWORD *)(a1 + 1096), " Arg[");
            v40 = sub_227B910(v39, v37);
            v41 = sub_995540(v40, "]=\"");
            v42 = sub_9954E0(
                    v41,
                    *(const void **)(*(_QWORD *)(a2 + 16) + 24 * v37 + 8),
                    *(_QWORD *)(*(_QWORD *)(a2 + 16) + 24 * v37 + 16));
            sub_995540(v42, "\"");
            result = v37 + 1;
            if ( v37 == v38 )
              break;
            ++v37;
          }
        }
        return result;
      case 4:
        v12 = sub_995540(*(_QWORD *)(a1 + 1096), " Name=\"");
        v13 = sub_9954E0(v12, *(const void **)(a2 + 16), *(_QWORD *)(a2 + 24));
        sub_995540(v13, "\"");
        result = *(unsigned int *)(a2 + 48);
        if ( (_DWORD)result )
        {
          sub_995540(*(_QWORD *)(a1 + 1096), " Attrs: ");
          result = *(_QWORD *)(a2 + 48);
          if ( (_DWORD)result )
          {
            v43 = 0;
            v44 = 56 * ((unsigned int)(result - 1) + 1LL);
            do
            {
              v45 = *(_QWORD *)(a2 + 40);
              v46 = sub_995540(*(_QWORD *)(a1 + 1096), " \"");
              v47 = v43 + v45;
              v43 += 56;
              v48 = sub_9954E0(v46, *(const void **)(v47 + 8), *(_QWORD *)(v47 + 16));
              v49 = sub_995540(v48, "=\"");
              v50 = sub_9954E0(v49, *(const void **)(v47 + 40), *(_QWORD *)(v47 + 48));
              result = sub_995540(v50, "\"");
            }
            while ( v44 != v43 );
          }
        }
        if ( (*(_BYTE *)(a2 + 13) & 4) != 0 )
          return sub_995540(*(_QWORD *)(a1 + 1096), " SelfClosing");
        return result;
      case 5:
        v14 = *(_QWORD *)(a1 + 1096);
        v15 = " Name=\"";
LABEL_10:
        v16 = sub_995540(v14, v15);
        v17 = sub_9954E0(v16, *(const void **)(a2 + 16), *(_QWORD *)(a2 + 24));
        return sub_995540(v17, "\"");
      case 6:
      case 7:
        return result;
      case 8:
        v24 = sub_995540(*(_QWORD *)(a1 + 1096), " Name=\"");
        v25 = sub_F2B1F0(a1, (*(_DWORD *)(a2 + 12) >> 8) & 0xFFFFF);
        v26 = sub_995540(v24, v25);
        sub_995540(v26, "\"");
        result = *(_QWORD *)(a2 + 24);
        if ( (_DWORD)result )
        {
          v27 = (unsigned int)(result - 1);
          for ( i = 0; ; ++i )
          {
            v29 = sub_995540(*(_QWORD *)(a1 + 1096), " Arg[");
            v30 = sub_227B910(v29, i);
            v31 = sub_995540(v30, "]=\"");
            v32 = sub_9954E0(
                    v31,
                    *(const void **)(*(_QWORD *)(a2 + 16) + 24 * i + 8),
                    *(_QWORD *)(*(_QWORD *)(a2 + 16) + 24 * i + 16));
            sub_995540(v32, "\"");
            result = i + 1;
            if ( i == v27 )
              break;
          }
        }
        return result;
      case 9:
        v21 = *(_QWORD *)(a1 + 1096);
        v20 = " Text=\"";
        goto LABEL_12;
      case 0xA:
        v18 = sub_995540(*(_QWORD *)(a1 + 1096), " Name=\"");
        v19 = sub_F2B1F0(a1, (*(_DWORD *)(a2 + 12) >> 8) & 0xFFFFF);
        v20 = "\" CloseName=\"";
        v21 = sub_995540(v18, v19);
LABEL_12:
        v22 = sub_995540(v21, v20);
        v23 = sub_9954E0(v22, *(const void **)(a2 + 40), *(_QWORD *)(a2 + 48));
        result = sub_995540(v23, "\"");
        break;
      case 0xB:
        result = sub_F2B810(a1, a2, a3);
        break;
    }
  }
  else if ( v4 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 24LL))(*(_QWORD *)(a1 + 1096), 4, 0, 0);
    sub_995540(*(_QWORD *)(a1 + 1096), "<<<NULL>>>");
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
  }
  else
  {
    return sub_995540(*(_QWORD *)(a1 + 1096), "<<<NULL>>>");
  }
  return result;
}
