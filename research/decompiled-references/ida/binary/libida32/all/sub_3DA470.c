__int64 __fastcall sub_3DA470(__int64 *a1)
{
  _BYTE *v2; // r12
  char v3; // cl
  _BYTE *v4; // rdx
  __int64 v5; // rsi
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r12
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rsi
  void *v13; // rdi
  __int64 v14; // rax
  _BYTE *v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rsi
  __int64 v18; // r13
  unsigned __int64 v19; // rdi
  _BYTE *v20; // rax
  int utf8_char; // eax
  _BYTE *v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // r13
  __int64 v26; // rax
  unsigned __int64 v27; // rbp
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // r15
  unsigned __int64 v32; // r14
  __int64 v33; // rsi
  __int64 v34; // rax
  void *v35; // rdi
  _BYTE *v36; // [rsp+0h] [rbp-68h] BYREF
  __int64 v37; // [rsp+8h] [rbp-60h] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v39; // [rsp+18h] [rbp-50h]
  unsigned __int64 v40; // [rsp+28h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  v39 = 0;
  ptr = nullptr;
  v2 = (_BYTE *)*a1;
  v36 = v2;
  v3 = *v2;
  v4 = v2;
  while ( 2 )
  {
    switch ( v3 )
    {
      case 0:
        goto LABEL_5;
      case 1:
        if ( v4[1] != 40 )
          goto LABEL_21;
        v15 = v4;
        do
        {
          if ( !*v15 )
            goto LABEL_45;
          ++v15;
        }
        while ( v15 != v4 + 8 );
        v36 = v15;
        v4 = v15;
LABEL_21:
        v16 = v39;
        v17 = ptr;
        v37 = v4 - v2;
        v18 = v4 - v2;
        v19 = v39 + 1;
        if ( &v37 < ptr || &v37 >= (__int64 *)((char *)ptr + 8 * *((_QWORD *)&v39 + 1)) )
        {
          if ( *((_QWORD *)&v39 + 1) < v19 )
          {
            ptr = (void *)qvector_reserve(&ptr, ptr, v39 + 1, 8);
            v17 = ptr;
            v18 = v37;
            v16 = v39;
          }
        }
        else if ( *((_QWORD *)&v39 + 1) < v19 )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, v39 + 1, 8);
          v17 = ptr;
          v16 = v39;
        }
        v17[v16] = v18;
        v20 = v36;
        *(_QWORD *)&v39 = v39 + 1;
        if ( !*v36 )
          goto LABEL_9;
        if ( !v36[1] )
        {
          v4 = v36;
LABEL_45:
          v23 = (_BYTE *)*a1;
          v24 = v4 - v2;
          v25 = v24;
          v26 = *a1;
          if ( v24 )
          {
            v27 = v24 + 1;
            v28 = a1[1];
            if ( v28 < v27 )
            {
              if ( a1[2] < v27 )
              {
                v26 = qvector_reserve(a1, *a1, v27, 1);
                *a1 = v26;
                v28 = a1[1];
              }
              memset((void *)(v26 + v28), 0, v27 - v28);
              a1[1] = v27;
              v23 = (_BYTE *)*a1;
            }
            else if ( v27 != v28 )
            {
              a1[1] = v27;
            }
            v23[v25] = 0;
          }
          else if ( v23 )
          {
            a1[1] = 0;
            qfree(v23);
            *a1 = 0;
            a1[2] = 0;
          }
          goto LABEL_9;
        }
        v4 = v36 + 2;
        v36 += 2;
        v3 = v20[2];
        continue;
      case 2:
        if ( (_QWORD)v39 )
        {
          if ( !v4[1] )
            goto LABEL_45;
          v36 = v4 + 2;
          *(_QWORD *)&v39 = v39 - 1;
          v3 = v4[2];
          v4 += 2;
        }
        else
        {
          do
          {
            do
              v29 = a1[1];
            while ( !v29 );
            v30 = v29 - 1;
            v31 = v4 - v2;
          }
          while ( v4 - v2 >= v30 );
          v32 = v31 + 1;
          if ( v31 + 1 < v30 )
          {
            v35 = (void *)(*a1 + v31);
            v31 = v30 - 1;
            memmove(v35, (const void *)(*a1 + v32), v30 - v32);
            v32 = v31 + 1;
          }
          v33 = *a1;
          if ( a1[2] < v32 )
          {
            v34 = qvector_reserve(a1, v33, v32, 1);
            *a1 = v34;
            v33 = v34;
          }
          a1[1] = v32;
          *(_BYTE *)(v33 + v31) = 0;
          v4 = v36;
          v3 = *v36;
        }
        continue;
      case 3:
        v36 = v4 + 1;
        if ( v4[1] )
        {
          v36 = v4 + 2;
          v3 = v4[2];
          v4 += 2;
          continue;
        }
        v36 = v4;
        v3 = *v4;
LABEL_5:
        if ( v3 )
          goto LABEL_45;
LABEL_9:
        while ( 2 )
        {
          v7 = v39;
          v8 = a1[1];
          if ( !(_QWORD)v39 )
          {
LABEL_63:
            v9 = (v8 == 0) + v8 - 1;
            goto LABEL_38;
          }
          v9 = v39 - 1;
          v10 = *((_QWORD *)ptr + v39 - 1);
          *(_QWORD *)&v39 = v39 - 1;
          if ( v8 )
          {
            v11 = v8 - 1;
            while ( v10 >= v11 )
            {
              if ( !v9 )
                goto LABEL_63;
              v10 = *((_QWORD *)ptr + --v9);
              *(_QWORD *)&v39 = v9;
            }
            v12 = v10 + 2;
            if ( v10 + 2 >= v11 )
            {
              v5 = *a1;
              v6 = v10 + 1;
              if ( a1[2] < v10 + 1 )
                goto LABEL_15;
            }
            else
            {
              v13 = (void *)(v10 + *a1);
              v10 = v8 - 3;
              memmove(v13, (const void *)(*a1 + v12), v11 - v12);
              v6 = v10 + 1;
              v5 = *a1;
              if ( a1[2] < v10 + 1 )
              {
LABEL_15:
                v14 = qvector_reserve(a1, v5, v6, 1);
                *a1 = v14;
                v5 = v14;
              }
            }
            a1[1] = v6;
            *(_BYTE *)(v5 + v10) = 0;
            continue;
          }
          break;
        }
        if ( (v9 & 1) != 0 )
        {
          v9 = v7 - 2;
          *(_QWORD *)&v39 = v7 - 2;
        }
        while ( v9 )
        {
          v9 -= 2;
          *(_QWORD *)&v39 = v9;
        }
LABEL_38:
        if ( ptr )
          qfree(ptr);
        return v9;
      case 4:
        v36 = v4 + 1;
        v3 = *++v4;
        continue;
      default:
        utf8_char = get_utf8_char(&v36);
        v4 = v36;
        if ( utf8_char == -1 )
        {
          ++v36;
          *v4 = 95;
          v4 = v36;
        }
        v3 = *v4;
        continue;
    }
  }
}

