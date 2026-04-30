__int64 __fastcall sub_5132B0(__int64 a1, __int64 a2)
{
  unsigned int v3; // r15d
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r14
  _QWORD *v6; // rbp
  __int64 v7; // r8
  __int64 v8; // rsi
  __int64 v9; // rdx
  unsigned int v10; // ebp
  void *v11; // r9
  __int64 v12; // rbp
  size_t v13; // r8
  size_t v14; // r10
  __int64 v15; // rsi
  size_t v16; // rdx
  const char *v17; // rsi
  __int128 v18; // kr00_16
  __int64 v19; // rdi
  __int64 v20; // rax
  size_t v22; // [rsp+0h] [rbp-A8h]
  __int64 v23; // [rsp+0h] [rbp-A8h]
  void *v24; // [rsp+8h] [rbp-A0h]
  __int64 v25; // [rsp+8h] [rbp-A0h]
  size_t v26; // [rsp+10h] [rbp-98h]
  size_t v27; // [rsp+18h] [rbp-90h]
  unsigned int v28; // [rsp+28h] [rbp-80h] BYREF
  int v29; // [rsp+2Ch] [rbp-7Ch] BYREF
  __int64 v30; // [rsp+30h] [rbp-78h]
  __int64 v31; // [rsp+38h] [rbp-70h]
  void *src; // [rsp+40h] [rbp-68h] BYREF
  _BYTE *v33; // [rsp+48h] [rbp-60h] BYREF
  __int64 v34; // [rsp+50h] [rbp-58h] BYREF
  __int128 v35; // [rsp+58h] [rbp-50h]
  unsigned __int64 v36; // [rsp+68h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  v34 = 0;
  v30 = -1;
  v31 = -1;
  v35 = 0;
  v3 = sub_513240((int *)a1);
  if ( (_BYTE)v3 )
  {
    v4 = HIDWORD(v30);
    v5 = HIDWORD(v31);
    if ( HIDWORD(v31) < (unsigned __int64)HIDWORD(v30) )
    {
      v17 = nullptr;
      v18 = 0u;
    }
    else
    {
      if ( (unsigned __int64)HIDWORD(v30) < *(_QWORD *)(a1 + 64) )
      {
        v6 = (_QWORD *)(*(_QWORD *)(a1 + 56) + 48LL * HIDWORD(v30));
        if ( v6 )
          goto LABEL_8;
      }
      while ( v5 >= ++v4 )
      {
        while ( v4 < *(_QWORD *)(a1 + 64) )
        {
          v6 = (_QWORD *)(*(_QWORD *)(a1 + 56) + 48 * v4);
LABEL_8:
          if ( !(unsigned __int8)sub_512FC0((int *)a1, (int *)&v28, &v29) )
            break;
          v7 = v35;
          if ( (unsigned __int64)v35 > 1 )
          {
            v8 = v34;
            v9 = v35 + 1;
            if ( *((_QWORD *)&v35 + 1) < (unsigned __int64)(v35 + 1) )
            {
              v25 = v35;
              v23 = v35 + 1;
              v34 = qvector_reserve(&v34, v34, v9, 1);
              v7 = v25;
              v8 = v34;
              v9 = v23;
            }
            *(_QWORD *)&v35 = v9;
            *(_BYTE *)(v8 + v7 - 1) = 10;
            *(_BYTE *)(v34 + v7) = 0;
          }
          src = (void *)sub_511DC0(v6, nullptr);
          v10 = v28;
          skip_utf8(&src, v28);
          v33 = src;
          skip_utf8(&v33, v29 - v10);
          v11 = src;
          v12 = v35;
          v13 = v33 - (_BYTE *)src;
          v14 = v33 - (_BYTE *)src;
          if ( (_QWORD)v35 )
          {
            v12 = v35 - 1;
            v14 = v13 + v35 - 1;
          }
          v15 = v34;
          v16 = v14 + 1;
          if ( *((_QWORD *)&v35 + 1) < v14 + 1 )
          {
            v27 = v14;
            v26 = v33 - (_BYTE *)src;
            v24 = src;
            v22 = v14 + 1;
            v34 = qvector_reserve(&v34, v34, v16, 1);
            v14 = v27;
            v15 = v34;
            v13 = v26;
            v11 = v24;
            v16 = v22;
          }
          *(_QWORD *)&v35 = v16;
          ++v4;
          *(_BYTE *)(v15 + v14) = 0;
          memmove((void *)(v12 + v34), v11, v13);
          if ( v5 < v4 )
            goto LABEL_18;
        }
      }
LABEL_18:
      v17 = (const char *)v34;
      v18 = v35;
    }
    v19 = *(_QWORD *)a2;
    v20 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)a2 = v17;
    *(_OWORD *)(a2 + 8) = v18;
    v34 = v19;
    *((_QWORD *)&v35 + 1) = v20;
    if ( v19 )
    {
      *(_QWORD *)&v35 = 0;
      qfree(v19, v17);
    }
  }
  return v3;
}
