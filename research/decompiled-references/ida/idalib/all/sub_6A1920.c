unsigned __int64 __fastcall sub_6A1920(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  char v8; // al
  unsigned __int64 v9; // r12
  char v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r15
  __int64 v13; // rbx
  __int64 v14; // rsi
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  bool v18; // al
  void **v19; // rbx
  __int64 v20; // rax
  __int64 v21; // r14
  void *v22; // rdi
  bool v23; // cf
  bool v24; // al
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  __int64 v30; // [rsp+8h] [rbp-C0h]
  void *ptr; // [rsp+10h] [rbp-B8h]
  void **v32; // [rsp+18h] [rbp-B0h]
  void *v33; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v34; // [rsp+28h] [rbp-A0h]
  void **v35; // [rsp+38h] [rbp-90h]
  __int64 v36; // [rsp+40h] [rbp-88h]
  void *v37; // [rsp+60h] [rbp-68h]
  char v38; // [rsp+81h] [rbp-47h]
  unsigned __int64 v39; // [rsp+88h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  if ( a1 != a2 )
  {
    v3 = a1 + 104;
    if ( a2 != a1 + 104 )
    {
      while ( 1 )
      {
        v6 = **(_QWORD **)v3;
        v7 = **(_QWORD **)a1;
        if ( v6 == -1 )
        {
          if ( v7 != -1 )
            goto LABEL_10;
        }
        else
        {
          if ( (*(_BYTE *)(a3 + 12) & 8) != 0 )
          {
            if ( v7 == -1 )
              goto LABEL_16;
            v6 &= ~1uLL;
            v7 &= ~1uLL;
          }
          else if ( v7 == -1 )
          {
            goto LABEL_16;
          }
          if ( v7 != v6 )
          {
            if ( v6 >= v7 )
              goto LABEL_10;
            goto LABEL_16;
          }
        }
        v8 = *(_BYTE *)(v3 + 97);
        if ( (v8 == 1) == (*(_BYTE *)(a1 + 97) == 1) )
        {
          v16 = *(_QWORD *)(*(_QWORD *)v3 + 8LL);
          v17 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
          if ( v16 != v17 )
          {
            v18 = v17 < v16;
            goto LABEL_27;
          }
          if ( v8 != 1 )
          {
            if ( v8 != 2 || (v25 = *(_QWORD *)(a1 + 32), v23 = *(_QWORD *)(v3 + 32) < v25, *(_QWORD *)(v3 + 32) == v25) )
              v23 = v3 < a1;
            v24 = v23;
LABEL_43:
            if ( !v24 )
              goto LABEL_10;
            goto LABEL_16;
          }
          v26 = *(_QWORD *)(v3 + 32);
          v27 = *(_QWORD *)(a1 + 32);
          if ( v26 != v27 )
          {
            if ( !v26 )
              goto LABEL_16;
            if ( !v27 )
              goto LABEL_10;
          }
          v28 = *(_QWORD *)(v3 + 72);
          if ( v28 != *(_QWORD *)(a1 + 72) )
          {
            v18 = v28 < *(_QWORD *)(a1 + 72);
LABEL_27:
            if ( !v18 )
              goto LABEL_10;
            goto LABEL_16;
          }
          if ( v28 )
          {
            v24 = **(_QWORD **)(v3 + 64) < **(_QWORD **)(a1 + 64);
            goto LABEL_43;
          }
          if ( *(_QWORD *)(v3 + 88) >= *(_QWORD *)(a1 + 88) )
            goto LABEL_10;
LABEL_16:
          v33 = nullptr;
          v35 = nullptr;
          v38 = 0;
          v34 = 0;
          sub_698F60((__int64)&v33, v3);
          v9 = v3 + 104;
          v10 = v38;
          v11 = v3 - a1;
          v12 = v3 + 104;
          ptr = v33;
          v32 = v35;
          v13 = 0x4EC4EC4EC4EC4EC5LL * ((__int64)(v3 - a1) >> 3);
          if ( v11 > 0 )
          {
            do
            {
              v14 = v12 - 208;
              v12 -= 104;
              sub_698F60(v12, v14);
              --v13;
            }
            while ( v13 );
          }
          sub_698F60(a1, (__int64)&v33);
          if ( v10 == 2 )
          {
            v19 = v32;
            if ( !v32 )
              goto LABEL_20;
            v20 = v36;
            v21 = 0;
            if ( v36 )
            {
              do
              {
                v22 = *v19;
                if ( *v19 )
                {
                  v19[1] = nullptr;
                  v30 = v20;
                  qfree(v22);
                  v20 = v30;
                }
                ++v21;
                v19 += 7;
              }
              while ( v20 != v21 );
            }
LABEL_38:
            qfree(v32);
            goto LABEL_20;
          }
          if ( v10 == 1 )
          {
            if ( v37 )
              qfree(v37);
            if ( v32 )
              goto LABEL_38;
          }
LABEL_20:
          if ( !ptr )
            goto LABEL_11;
          qfree(ptr);
          v3 = v9;
          if ( a2 == v9 )
            return v39 - __readfsqword(0x28u);
        }
        else
        {
          if ( v8 == 1 )
            goto LABEL_16;
LABEL_10:
          v9 = v3 + 104;
          sub_6A1670(v3, a3);
LABEL_11:
          v3 = v9;
          if ( a2 == v9 )
            return v39 - __readfsqword(0x28u);
        }
      }
    }
  }
  return v39 - __readfsqword(0x28u);
}
