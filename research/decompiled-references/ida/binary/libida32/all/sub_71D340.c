__int64 __fastcall sub_71D340(__int64 a1, __int64 a2, unsigned int a3, unsigned __int8 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // r12
  unsigned __int8 v7; // r15
  unsigned __int8 v8; // r8
  int v9; // r14d
  unsigned __int16 *v10; // r13
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int16 *v13; // r9
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // r15
  __int64 v16; // rax
  int v17; // r10d
  __int64 v18; // rax
  int v19; // edx
  unsigned __int8 v20; // si
  unsigned __int8 v21; // cl
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  int v26; // r13d
  int v27; // r12d
  __int64 i; // r14
  __int64 v29; // rax
  __int64 v30; // rdi
  unsigned __int16 *v31; // r8
  int v32; // eax
  __int64 v33; // rcx
  unsigned __int16 *v34; // r9
  unsigned __int64 v35; // r10
  unsigned __int64 v36; // r11
  __int64 v37; // rax
  int v38; // r8d
  __int64 v39; // rax
  int v40; // edx
  unsigned __int8 v41; // si
  unsigned __int8 v42; // cl
  __int64 v43; // rdx
  __int64 v44; // rcx
  unsigned __int16 *v45; // rcx
  unsigned __int64 v46; // r11
  unsigned __int64 v47; // r8
  __int64 v48; // r10
  int v49; // r9d
  int v50; // eax
  int v51; // [rsp+0h] [rbp-58h]
  unsigned __int8 v53; // [rsp+Ch] [rbp-4Ch]
  int v54; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int8 v55; // [rsp+14h] [rbp-44h]
  unsigned __int16 v56; // [rsp+16h] [rbp-42h]
  unsigned __int64 v57; // [rsp+18h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 48) )
    return 0;
  v4 = a1;
  if ( *(_DWORD *)(a1 + 1612) == 5 )
    return 0;
  v5 = *(_QWORD *)a2;
  v6 = a2;
  v7 = a4;
  v51 = *(__int16 *)(*(_QWORD *)a2 + 4LL);
  if ( !**(_DWORD **)a2 )
  {
    if ( (_BYTE)a3 )
    {
      v26 = 0;
      if ( a4 )
      {
LABEL_27:
        a1 = v4;
        if ( !(unsigned __int8)sub_71D220(v4, v6, v26, 1) )
          return 0;
        v27 = v26 + 1;
        for ( i = v5 + 6LL * (v26 + 1);
              v27 < v51 && (a4 || (unsigned int)*(unsigned __int16 *)(i + 6) >= *(_DWORD *)(v4 + 4240));
              i += 6 )
        {
          v29 = *(unsigned __int16 *)(i + 10);
          a2 = *(unsigned int *)(v5 - 8);
          v12 = v29;
          if ( (unsigned int)v29 >= (unsigned int)a2 )
            goto LABEL_90;
          v12 = v5 + v29;
          v30 = *(unsigned __int16 *)(v5 + v29);
          v31 = (unsigned __int16 *)(v5 + v29 + v30 + 2);
          v32 = *(unsigned __int16 *)(v5 + v29);
          a1 = v12 + v30 + 3 - v5;
          if ( (unsigned int)a1 >= (unsigned int)a2 )
            goto LABEL_90;
          a1 = *v31;
          if ( (int)v12 + (int)a1 + v32 + 4 - 1 - (int)v5 >= (unsigned int)a2 )
            goto LABEL_90;
          a1 = v4 + 48;
          if ( !(unsigned __int8)sub_726260(v4 + 48) )
            return 0;
          ++v27;
        }
        return 1;
      }
      v33 = *(unsigned __int16 *)(v5 + 10);
      v12 = *(unsigned int *)(v5 - 8);
      v34 = *(unsigned __int16 **)(a1 + 4232);
      if ( (unsigned int)v33 < (unsigned int)v12 )
      {
        a1 = v5 + v33;
        v35 = *(unsigned __int16 *)(v5 + v33);
        a2 = v5 + v33 + v35 + 2;
        if ( (int)v33 + (int)v35 + 3 < (unsigned int)v12
          && (unsigned int)v33 + *(unsigned __int16 *)a2 + (_DWORD)v35 + 4 - 1 < (unsigned int)v12 )
        {
          v36 = *v34;
          v37 = *(unsigned __int16 *)(v5 + v33);
          if ( v36 <= v35 )
            v37 = *v34;
          v38 = v37;
          if ( v37 )
          {
            v39 = 2;
            v40 = 1;
            while ( 1 )
            {
              v41 = *(_BYTE *)(a1 + v39);
              v42 = *((_BYTE *)v34 + v39);
              if ( v41 != v42 )
                break;
              ++v40;
              ++v39;
              if ( v38 < v40 )
                goto LABEL_82;
            }
            if ( v41 < v42 )
              v40 = -v40;
          }
          else
          {
            v40 = 1;
LABEL_82:
            if ( v36 == v35 )
            {
              v40 = 0;
            }
            else if ( v36 >= v35 )
            {
              v40 = -v40;
            }
          }
          v26 = 0;
          if ( *(_DWORD *)(v4 + 4240) < v40 )
            goto LABEL_27;
          return 1;
        }
      }
LABEL_90:
      sub_722BF0(a1, a2, v12);
    }
    v43 = *(_QWORD *)(a1 + 4232);
    a1 = *(_QWORD *)a2;
    sub_721A00(v5, &v54, v43, 0, 0, (unsigned int)v51);
    v26 = v54;
    if ( v55 )
      goto LABEL_27;
    if ( v54 != v51 )
    {
      if ( v7 )
        goto LABEL_27;
      v12 = v5 + 6LL * v54 + 6;
      if ( *(_WORD *)v12 >= v56 )
      {
        v44 = *(unsigned __int16 *)(v5 + 6LL * v54 + 10);
        a2 = *(unsigned int *)(v5 - 8);
        if ( (unsigned int)v44 >= (unsigned int)a2 )
          goto LABEL_90;
        v45 = (unsigned __int16 *)(v5 + v44);
        v46 = *v45;
        a1 = (__int64)v45 + v46 - v5 + 3;
        if ( (unsigned int)a1 >= (unsigned int)a2 )
          goto LABEL_90;
        a1 = *(unsigned __int16 *)((char *)v45 + v46 + 2);
        v12 = (__int64)v45 + (int)a1 + (int)v46 - v5 + 3;
        if ( (unsigned int)v12 >= (unsigned int)a2 )
          goto LABEL_90;
        a2 = *(_QWORD *)(v4 + 4232);
        LODWORD(v12) = *(unsigned __int16 *)a2 - v56;
        if ( (int)v12 < 0 )
        {
          v50 = -1;
        }
        else
        {
          v47 = (unsigned int)v12;
          v48 = a2 + v56 + 2;
          v12 = (unsigned int)v12;
          if ( v46 <= (unsigned int)v12 )
            v12 = *v45;
          v49 = v12;
          if ( v12 )
          {
            v12 = 0;
            v50 = 1;
            while ( 1 )
            {
              a1 = *(unsigned __int8 *)(v48 + v12);
              a2 = *((unsigned __int8 *)v45 + v12 + 2);
              if ( (_BYTE)a1 != (_BYTE)a2 )
                break;
              ++v50;
              ++v12;
              if ( v49 < v50 )
                goto LABEL_89;
            }
            v12 = (unsigned int)-v50;
            if ( (unsigned __int8)a1 < (unsigned __int8)a2 )
              v50 = -v50;
            if ( v50 >= 0 )
              goto LABEL_90;
          }
          else
          {
            v50 = 1;
LABEL_89:
            v50 = -v50;
            if ( v47 >= v46 )
              goto LABEL_90;
          }
        }
        if ( (unsigned int)v56 - 1 - v50 >= *(_DWORD *)(v4 + 4240) )
          goto LABEL_27;
      }
    }
    return 1;
  }
  v8 = a3;
  v9 = 0;
  if ( !(_BYTE)a3 )
  {
    a2 = (__int64)&v54;
    sub_721790(v5, &v54, *(_QWORD *)(a1 + 4232), 0xFFFFFFFFLL, a3);
    v8 = v55;
    v9 = v54;
    if ( v55 )
    {
      a2 = v6;
      v9 = v54 + 1;
      v8 = sub_71D220(a1, v6, v54, 1);
      if ( !v8 )
        return 0;
    }
  }
  if ( v9 >= v51 )
  {
    v51 = v9;
    v22 = v8;
LABEL_23:
    v23 = (unsigned int)v51;
    v24 = v7;
  }
  else
  {
    v53 = v7;
    v10 = (unsigned __int16 *)(v5 + 6LL * v9 + 10);
    while ( 1 )
    {
      if ( !a4 )
      {
        v11 = *v10;
        v12 = *(unsigned int *)(v5 - 8);
        v13 = *(unsigned __int16 **)(v4 + 4232);
        a1 = v11;
        if ( (unsigned int)v11 >= (unsigned int)v12 )
          goto LABEL_90;
        a1 = v5 + v11;
        v14 = *(unsigned __int16 *)(v5 + v11);
        a2 = v5 + v11 + v14 + 2;
        if ( (int)v11 + (int)v14 + 3 >= (unsigned int)v12
          || (unsigned int)v11 + *(unsigned __int16 *)a2 + (_DWORD)v14 + 4 - 1 >= (unsigned int)v12 )
        {
          goto LABEL_90;
        }
        v15 = *v13;
        v16 = *(unsigned __int16 *)a1;
        if ( v15 <= v14 )
          v16 = *v13;
        v17 = v16;
        if ( v16 )
        {
          v18 = 2;
          v19 = 1;
          while ( 1 )
          {
            v20 = *(_BYTE *)(a1 + v18);
            v21 = *((_BYTE *)v13 + v18);
            if ( v20 != v21 )
              break;
            ++v19;
            ++v18;
            if ( v17 < v19 )
              goto LABEL_30;
          }
          if ( v20 < v21 )
            v19 = -v19;
        }
        else
        {
          v19 = 1;
LABEL_30:
          if ( v15 == v14 )
          {
            v19 = 0;
          }
          else if ( v15 >= v14 )
          {
            v19 = -v19;
          }
        }
        if ( *(_DWORD *)(v4 + 4240) >= v19 )
          break;
      }
      sub_71D930(v4, v6, (unsigned int)v9, v8, 1);
      a2 = v6;
      v8 = sub_71D220(v4, v6, v9, 1);
      if ( !v8 )
        return 0;
      ++v9;
      v10 += 3;
      if ( v9 == v51 )
      {
        v7 = v53;
        v22 = 1;
        goto LABEL_23;
      }
    }
    v22 = v8;
    v23 = (unsigned int)v9;
    v24 = 0;
  }
  return sub_71D930(v4, v6, v23, v22, v24);
}

