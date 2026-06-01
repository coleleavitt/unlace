__int64 __fastcall sub_D88CE0(__int64 a1, int a2, unsigned int a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // r13
  __int64 v9; // r12
  unsigned __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rdi
  __int64 v14; // r13
  __int64 v15; // r12
  unsigned __int64 v16; // rbp
  _BYTE *v17; // rbx
  __int64 v18; // rdi
  unsigned __int64 v19; // rbp
  __int64 v20; // rdi
  __int64 v21; // r13
  __int64 v22; // r12
  unsigned __int64 v23; // rbp
  _WORD *v24; // rbx
  __int64 v25; // rdi
  unsigned __int64 v26; // rbp
  __int64 v27; // rdi
  __int64 v28; // r13
  __int64 v29; // r12
  unsigned __int64 v30; // rbp
  _DWORD *v31; // rbx
  __int64 v32; // rdi
  unsigned __int64 v33; // rbp
  __int64 v34; // rdi
  __int64 v35; // r13
  __int64 v36; // r12
  unsigned __int64 v37; // rbp
  _QWORD *v38; // rbx
  __int64 v39; // rdi
  unsigned __int64 v40; // rbp
  __int64 v41; // rdi
  __int64 v42; // r13
  __int64 v43; // r12
  unsigned __int64 v44; // rbp
  const __m128i *v45; // rbx
  __int64 v46; // rdi
  __int64 v47; // r13
  unsigned __int64 v48; // rbp
  __int64 v49; // rdi
  unsigned __int64 v50; // rbp
  __int64 v51; // rdi
  __int64 v52; // r12
  __int64 v53; // rbx
  unsigned __int64 v54; // r14
  int *v55; // rdx
  unsigned __int64 v56; // rbx
  __int64 v57; // rdi
  __int64 v58; // r13
  unsigned __int64 v59; // rbp
  __int64 v60; // rdi
  __int64 v61; // r13
  __int64 v62; // r12
  unsigned __int64 v63; // rbp
  __int64 v64; // rbx
  __int64 v65; // rax
  unsigned int v66; // [rsp+Ch] [rbp-5Ch] BYREF
  __m128 v67[5]; // [rsp+10h] [rbp-58h] BYREF

  switch ( a2 )
  {
    case 0:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v13 = *(_QWORD *)(a1 + 408);
        *(_QWORD *)(a1 + 1240) = *a4;
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v13 + 24LL))(v13) )
          goto LABEL_71;
        v14 = *(_QWORD *)(a1 + 784);
        v15 = *(_QWORD *)(a1 + 560);
        v66 = a3;
        v16 = sub_D88C20(v14 + 176, (int *)&v66);
        if ( v16 != sub_D88BF0(v14 + 176) )
        {
          sub_E23170(v67, *(_QWORD *)(v16 + 8));
          v17 = (_BYTE *)sub_D0C5D0((__int64)v67);
          sub_E232A0(v67);
          goto LABEL_56;
        }
        goto LABEL_72;
      }
      break;
    case 1:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v18 = *(_QWORD *)(a1 + 408);
        *(_QWORD *)(a1 + 1240) = *a4;
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v18 + 24LL))(v18) )
          goto LABEL_71;
        v14 = *(_QWORD *)(a1 + 784);
        v15 = *(_QWORD *)(a1 + 560);
        v66 = a3;
        v19 = sub_D88C20(v14 + 176, (int *)&v66);
        if ( v19 != sub_D88BF0(v14 + 176) )
        {
          sub_E23170(v67, *(_QWORD *)(v19 + 8));
          v17 = (_BYTE *)sub_D0C7E0((__int64)v67);
          sub_E232A0(v67);
          goto LABEL_56;
        }
        goto LABEL_72;
      }
      break;
    case 2:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v20 = *(_QWORD *)(a1 + 408);
        *(_QWORD *)(a1 + 1240) = *a4;
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v20 + 24LL))(v20) )
          goto LABEL_71;
        v21 = *(_QWORD *)(a1 + 784);
        v22 = *(_QWORD *)(a1 + 560);
        v66 = a3;
        v23 = sub_D88C20(v21 + 176, (int *)&v66);
        if ( v23 != sub_D88BF0(v21 + 176) )
        {
          sub_E23170(v67, *(_QWORD *)(v23 + 8));
          v24 = (_WORD *)sub_D0CBD0((__int64)v67);
          sub_E232A0(v67);
          goto LABEL_25;
        }
        goto LABEL_75;
      }
      break;
    case 3:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v25 = *(_QWORD *)(a1 + 408);
        *(_QWORD *)(a1 + 1240) = *a4;
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v25 + 24LL))(v25) )
          goto LABEL_71;
        v21 = *(_QWORD *)(a1 + 784);
        v22 = *(_QWORD *)(a1 + 560);
        v66 = a3;
        v26 = sub_D88C20(v21 + 176, (int *)&v66);
        if ( v26 == sub_D88BF0(v21 + 176) )
        {
LABEL_75:
          v24 = (_WORD *)(*(_QWORD *)(v21 + 152) + v66 - (unsigned __int64)*(unsigned int *)(v21 + 144));
        }
        else
        {
          sub_E23170(v67, *(_QWORD *)(v26 + 8));
          v24 = (_WORD *)sub_D0CDE0((__int64)v67);
          sub_E232A0(v67);
        }
LABEL_25:
        *(_WORD *)sub_E216C0(v22, 8) = *v24;
        result = 1;
      }
      break;
    case 4:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v27 = *(_QWORD *)(a1 + 408);
        *(_QWORD *)(a1 + 1240) = *a4;
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v27 + 24LL))(v27) )
          goto LABEL_71;
        v28 = *(_QWORD *)(a1 + 784);
        v29 = *(_QWORD *)(a1 + 560);
        v66 = a3;
        v30 = sub_D88C20(v28 + 176, (int *)&v66);
        if ( v30 != sub_D88BF0(v28 + 176) )
        {
          sub_E23170(v67, *(_QWORD *)(v30 + 8));
          v31 = (_DWORD *)sub_D0D1D0((__int64)v67);
          sub_E232A0(v67);
          goto LABEL_34;
        }
        goto LABEL_74;
      }
      break;
    case 5:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v32 = *(_QWORD *)(a1 + 408);
        *(_QWORD *)(a1 + 1240) = *a4;
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v32 + 24LL))(v32) )
          goto LABEL_71;
        v28 = *(_QWORD *)(a1 + 784);
        v29 = *(_QWORD *)(a1 + 560);
        v66 = a3;
        v33 = sub_D88C20(v28 + 176, (int *)&v66);
        if ( v33 == sub_D88BF0(v28 + 176) )
        {
LABEL_74:
          v31 = (_DWORD *)(*(_QWORD *)(v28 + 152) + v66 - (unsigned __int64)*(unsigned int *)(v28 + 144));
        }
        else
        {
          sub_E23170(v67, *(_QWORD *)(v33 + 8));
          v31 = (_DWORD *)sub_D0D3E0((__int64)v67);
          sub_E232A0(v67);
        }
LABEL_34:
        *(_DWORD *)sub_E216C0(v29, 8) = *v31;
        result = 1;
      }
      break;
    case 6:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v34 = *(_QWORD *)(a1 + 408);
        *(_QWORD *)(a1 + 1240) = *a4;
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v34 + 24LL))(v34) )
          goto LABEL_71;
        v35 = *(_QWORD *)(a1 + 784);
        v36 = *(_QWORD *)(a1 + 560);
        v66 = a3;
        v37 = sub_D88C20(v35 + 176, (int *)&v66);
        if ( v37 != sub_D88BF0(v35 + 176) )
        {
          sub_E23170(v67, *(_QWORD *)(v37 + 8));
          v38 = (_QWORD *)sub_D0D9C0((__int64)v67);
          sub_E232A0(v67);
          goto LABEL_43;
        }
        goto LABEL_73;
      }
      break;
    case 7:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v39 = *(_QWORD *)(a1 + 408);
        *(_QWORD *)(a1 + 1240) = *a4;
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v39 + 24LL))(v39) )
          goto LABEL_71;
        v35 = *(_QWORD *)(a1 + 784);
        v36 = *(_QWORD *)(a1 + 560);
        v66 = a3;
        v40 = sub_D88C20(v35 + 176, (int *)&v66);
        if ( v40 == sub_D88BF0(v35 + 176) )
        {
LABEL_73:
          v38 = (_QWORD *)(*(_QWORD *)(v35 + 152) + v66 - (unsigned __int64)*(unsigned int *)(v35 + 144));
        }
        else
        {
          sub_E23170(v67, *(_QWORD *)(v40 + 8));
          v38 = (_QWORD *)sub_D0DBD0((__int64)v67);
          sub_E232A0(v67);
        }
LABEL_43:
        *(_QWORD *)sub_E216C0(v36, 8) = *v38;
        result = 1;
      }
      break;
    case 8:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v41 = *(_QWORD *)(a1 + 408);
        *(_QWORD *)(a1 + 1240) = *a4;
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v41 + 24LL))(v41) )
          goto LABEL_71;
        v42 = *(_QWORD *)(a1 + 784);
        v43 = *(_QWORD *)(a1 + 560);
        v66 = a3;
        v44 = sub_D88C20(v42 + 176, (int *)&v66);
        if ( v44 == sub_D88BF0(v42 + 176) )
        {
          v45 = (const __m128i *)(*(_QWORD *)(v42 + 152) + v66 - (unsigned __int64)*(unsigned int *)(v42 + 144));
        }
        else
        {
          sub_E23170(v67, *(_QWORD *)(v44 + 8));
          v45 = (const __m128i *)sub_D0E1E0((__int64)v67);
          sub_E232A0(v67);
        }
        goto LABEL_66;
      }
      break;
    case 9:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v46 = *(_QWORD *)(a1 + 408);
        *(_QWORD *)(a1 + 1240) = *a4;
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v46 + 24LL))(v46) )
          goto LABEL_71;
        v47 = *(_QWORD *)(a1 + 784);
        v43 = *(_QWORD *)(a1 + 560);
        v66 = a3;
        v48 = sub_D88C20(v47 + 176, (int *)&v66);
        if ( v48 == sub_D88BF0(v47 + 176) )
        {
          v45 = (const __m128i *)(*(_QWORD *)(v47 + 152) + v66 - (unsigned __int64)*(unsigned int *)(v47 + 144));
        }
        else
        {
          sub_E23170(v67, *(_QWORD *)(v48 + 8));
          v45 = (const __m128i *)sub_D0E230((__int64)v67);
          sub_E232A0(v67);
        }
        goto LABEL_66;
      }
      break;
    case 10:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v49 = *(_QWORD *)(a1 + 408);
        *(_QWORD *)(a1 + 1240) = *a4;
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v49 + 24LL))(v49) )
          goto LABEL_71;
        v14 = *(_QWORD *)(a1 + 784);
        v15 = *(_QWORD *)(a1 + 560);
        v66 = a3;
        v50 = sub_D88C20(v14 + 176, (int *)&v66);
        if ( v50 == sub_D88BF0(v14 + 176) )
        {
LABEL_72:
          v17 = (_BYTE *)(*(_QWORD *)(v14 + 152) + v66 - (unsigned __int64)*(unsigned int *)(v14 + 144));
        }
        else
        {
          sub_E23170(v67, *(_QWORD *)(v50 + 8));
          v17 = (_BYTE *)sub_D0E7B0((__int64)v67);
          sub_E232A0(v67);
        }
LABEL_56:
        *(_BYTE *)sub_E216C0(v15, 8) = *v17;
        result = 1;
      }
      break;
    case 11:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v51 = *(_QWORD *)(a1 + 408);
        *(_QWORD *)(a1 + 1240) = *a4;
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v51 + 24LL))(v51) )
          goto LABEL_71;
        v52 = *(_QWORD *)(a1 + 560);
        v66 = a3;
        v53 = *(_QWORD *)(a1 + 784);
        v54 = sub_D88C20(v53 + 176, (int *)&v66);
        v55 = (int *)(*(_QWORD *)(v53 + 176) + 16LL * *(unsigned int *)(v53 + 192));
        sub_D88B90(v67, v55, v55, v53 + 176, 1);
        if ( v67[0].m128_u64[0] == v54 )
        {
          v56 = *(_QWORD *)(v53 + 152) + v66 - (unsigned __int64)*(unsigned int *)(v53 + 144);
        }
        else
        {
          sub_E23170(v67, *(_QWORD *)(v54 + 8));
          v56 = sub_D0F1C0((__int64)v67);
          sub_E232A0(v67);
        }
        sub_D35CB0(v52, v56);
        result = 1;
      }
      break;
    case 12:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v57 = *(_QWORD *)(a1 + 408);
        *(_QWORD *)(a1 + 1240) = *a4;
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v57 + 24LL))(v57) )
          goto LABEL_71;
        v58 = *(_QWORD *)(a1 + 784);
        v43 = *(_QWORD *)(a1 + 560);
        v66 = a3;
        v59 = sub_D88C20(v58 + 176, (int *)&v66);
        if ( v59 == sub_D88BF0(v58 + 176) )
        {
          v45 = (const __m128i *)(*(_QWORD *)(v58 + 152) + v66 - (unsigned __int64)*(unsigned int *)(v58 + 144));
        }
        else
        {
          sub_E23170(v67, *(_QWORD *)(v59 + 8));
          v45 = (const __m128i *)sub_D0E280((__int64)v67);
          sub_E232A0(v67);
        }
LABEL_66:
        *(__m128i *)sub_E216C0(v43, 16) = _mm_loadu_si128(v45);
        result = 1;
      }
      break;
    case 13:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v60 = *(_QWORD *)(a1 + 408);
        *(_QWORD *)(a1 + 1240) = *a4;
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v60 + 24LL))(v60) )
          goto LABEL_71;
        v61 = *(_QWORD *)(a1 + 784);
        v62 = *(_QWORD *)(a1 + 560);
        v66 = a3;
        v63 = sub_D88C20(v61 + 176, (int *)&v66);
        if ( v63 == sub_D88BF0(v61 + 176) )
        {
          v64 = *(_QWORD *)(v61 + 152) + v66 - (unsigned __int64)*(unsigned int *)(v61 + 144);
        }
        else
        {
          sub_E23170(v67, *(_QWORD *)(v63 + 8));
          v64 = sub_D0EA30((__int64)v67);
          sub_E232A0(v67);
        }
        v65 = sub_E216C0(v62, 48);
        sub_E231E0(v65, v64);
        result = 1;
      }
      break;
    case 14:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v7 = *(_QWORD *)(a1 + 408);
        *(_QWORD *)(a1 + 1240) = *a4;
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7) )
        {
LABEL_71:
          result = 0;
        }
        else
        {
          v8 = *(_QWORD *)(a1 + 784);
          v9 = *(_QWORD *)(a1 + 560);
          v66 = a3;
          v10 = sub_D88C20(v8 + 176, (int *)&v66);
          if ( v10 == sub_D88BF0(v8 + 176) )
          {
            v11 = *(_QWORD *)(v8 + 152) + v66 - (unsigned __int64)*(unsigned int *)(v8 + 144);
          }
          else
          {
            sub_E23170(v67, *(_QWORD *)(v10 + 8));
            v11 = sub_D0EF40((__int64)v67);
            sub_E232A0(v67);
          }
          v12 = sub_E216C0(v9, 64);
          sub_E231E0(v12, v11);
          *(_QWORD *)(v12 + 48) = *(_QWORD *)(v11 + 48);
          *(_DWORD *)(v12 + 56) = *(_DWORD *)(v11 + 56);
          result = 1;
        }
      }
      break;
  }
  return result;
}
