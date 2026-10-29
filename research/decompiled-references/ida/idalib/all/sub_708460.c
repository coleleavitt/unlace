__int64 __fastcall sub_708460(_QWORD *a1, _QWORD *a2, int a3, unsigned int a4)
{
  __int64 v6; // rdi
  _QWORD *tinfo_property; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // r13
  const char *v11; // r14
  unsigned __int64 v12; // r15
  unsigned __int64 *v13; // r13
  unsigned __int64 *v14; // r14
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // r12
  __int64 result; // rax
  unsigned __int64 *v19; // rdi
  unsigned __int64 *v20; // r9
  __int64 v21; // rsi
  __int64 v22; // rdi
  bool v23; // cf
  unsigned __int64 v24; // rax
  unsigned __int64 *v25; // rax
  unsigned __int64 *v26; // rdx
  unsigned __int64 *v27; // r8
  unsigned __int64 v28; // rsi
  unsigned int v29; // r15d
  unsigned __int8 v30; // dl
  unsigned int v31; // eax
  unsigned __int16 v32; // cx
  __int64 v33; // rdi
  unsigned int v34; // eax
  unsigned __int8 v35; // dl
  unsigned __int64 *v36; // [rsp+0h] [rbp-E8h]
  void *v37; // [rsp+0h] [rbp-E8h]
  __int64 v38; // [rsp+8h] [rbp-E0h]
  _BOOL4 v39; // [rsp+8h] [rbp-E0h]
  unsigned __int16 v40; // [rsp+8h] [rbp-E0h]
  unsigned __int64 *v41; // [rsp+10h] [rbp-D8h]
  unsigned __int64 v42; // [rsp+20h] [rbp-C8h]
  _QWORD v44[6]; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v45; // [rsp+60h] [rbp-88h]
  __int128 v46; // [rsp+70h] [rbp-78h]
  __int64 v47; // [rsp+80h] [rbp-68h]
  __int64 v48; // [rsp+88h] [rbp-60h]
  __int64 v49; // [rsp+90h] [rbp-58h]
  __int64 v50; // [rsp+98h] [rbp-50h]
  __int64 v51; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v52; // [rsp+A8h] [rbp-40h]

  v6 = *a2;
  v52 = __readfsqword(0x28u);
  tinfo_property = (_QWORD *)get_tinfo_property(v6, 311);
  if ( !tinfo_property )
  {
    if ( !under_debugger )
      interr(3372);
    BUG();
  }
  v9 = tinfo_property;
  if ( !tinfo_property[1] )
  {
    v36 = nullptr;
    v16 = 0;
    v14 = nullptr;
    goto LABEL_13;
  }
  v10 = (_QWORD *)*tinfo_property;
  if ( a3 )
  {
    if ( v10[3] )
    {
      v11 = (const char *)v10[2];
      if ( !strcmp(v11, "this") || !strcmp(v11, "This") )
      {
        v36 = nullptr;
        v12 = 0;
        v13 = nullptr;
        v14 = nullptr;
        while ( ++v12 < v9[1] )
        {
          while ( 1 )
          {
            v15 = sub_7077B0(a1, (__int64 *)(*v9 + 80 * v12 + 64), a4);
            if ( (v15 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
            {
              result = 0;
              v16 = (char *)v13 - (char *)v36;
              goto LABEL_15;
            }
            if ( v13 == v14 )
              break;
            *v14 = v15;
            ++v12;
            ++v14;
            if ( v12 >= v9[1] )
              goto LABEL_12;
          }
          v20 = v36;
          v21 = (char *)v13 - (char *)v36;
          result = v13 - v36;
          if ( result == 0xFFFFFFFFFFFFFFFLL )
            std::__throw_length_error("vector::_M_realloc_append");
LABEL_20:
          v22 = 1;
          if ( result )
            v22 = result;
          v23 = __CFADD__(v22, result);
          v24 = v22 + result;
          if ( v23 )
          {
            v38 = 0xFFFFFFFFFFFFFFFLL;
          }
          else
          {
            if ( v24 > 0xFFFFFFFFFFFFFFFLL )
              v24 = 0xFFFFFFFFFFFFFFFLL;
            v38 = v24;
          }
          v42 = v15;
          v41 = v20;
          v25 = (unsigned __int64 *)operator new(v38 * 8);
          v36 = v25;
          *(unsigned __int64 *)((char *)v25 + v21) = v42;
          if ( v14 == v41 )
          {
            v27 = v25;
          }
          else
          {
            v26 = v41;
            v27 = (unsigned __int64 *)((char *)v25 + (char *)v14 - (char *)v41);
            do
            {
              v28 = *v26;
              ++v25;
              ++v26;
              *(v25 - 1) = v28;
            }
            while ( v27 != v25 );
          }
          v14 = v27 + 1;
          if ( v41 )
            operator delete(v41, (char *)v13 - (char *)v41);
          v13 = &v36[v38];
        }
LABEL_12:
        v16 = (char *)v13 - (char *)v36;
LABEL_13:
        v17 = sub_7077B0(a1, v9 + 4, a4);
        if ( (v17 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
        {
          result = 0;
          goto LABEL_15;
        }
        v39 = (get_tinfo_property(*a2, 2) & 0x40) != 0;
        v29 = v39 | 4;
        if ( (get_tinfo_property(*a2, 2) & 0x80u) == 0LL )
          v29 = v39;
        v30 = v9[11] & 0xF0;
        if ( v30 == 0xC0 )
        {
          v31 = *((_DWORD *)v9 + 7);
          if ( v31 > 0x10 )
          {
            if ( v31 != 112 )
            {
              if ( v31 <= 0x70 )
              {
                v32 = 1;
                if ( v31 == 80 )
                  goto LABEL_42;
                v32 = 5;
                if ( v31 == 96 )
                  goto LABEL_42;
                v32 = 0;
              }
              else
              {
                v32 = 3;
                if ( v31 == 128 )
                  goto LABEL_42;
                v32 = 14;
                if ( v31 == 144 )
                  goto LABEL_42;
                v32 = 0;
              }
LABEL_40:
              if ( v31 <= 0x10 )
              {
                v40 = v32;
                v31 = getinf(99);
                v32 = v40;
              }
              goto LABEL_42;
            }
            v32 = 2;
LABEL_42:
            v33 = a1[6];
            v44[0] = v32;
            memset(&v44[2], 0, 32);
            v45 = 0;
            *(_DWORD *)((char *)v44 + 2) = (v31 & 0xFFFFFFF0) == 64 || (v31 & 0xFFFFFFF0) == 208;
            v44[1] = v29;
            v47 = 0;
            v48 = 0;
            v49 = 0;
            v50 = 0;
            v51 = 0;
            v46 = 0;
            result = sub_A73610(v33, v17, v36, v14 - v36, v44, 0);
LABEL_15:
            v19 = v36;
            if ( v36 )
            {
              v37 = (void *)result;
              operator delete(v19, v16);
              return (__int64)v37;
            }
            return result;
          }
        }
        else if ( v30 > 0x10u )
        {
          if ( v30 != 112 )
          {
            v31 = v30;
            if ( v30 > 0x70u )
            {
              v32 = 3;
              if ( v30 != 128 )
              {
                v32 = 0;
                if ( v30 == 144 )
                  v32 = 14;
              }
            }
            else
            {
              v32 = 1;
              if ( v30 != 80 )
                v32 = 5 * (v30 == 96);
            }
            goto LABEL_40;
          }
          v32 = 2;
          v31 = 112;
          goto LABEL_42;
        }
        v34 = getinf(99);
        v35 = v9[11] & 0xF0;
        if ( v34 == 112 )
        {
          v32 = 2;
        }
        else if ( v34 <= 0x70 )
        {
          v32 = 1;
          if ( v34 != 80 )
            v32 = 5 * (v34 == 96);
        }
        else
        {
          v32 = 3;
          if ( v34 != 128 )
          {
            v32 = 0;
            if ( v34 == 144 )
              v32 = 14;
          }
        }
        v31 = v35;
        if ( v35 == 0xC0 )
          v31 = *((_DWORD *)v9 + 7);
        goto LABEL_40;
      }
    }
  }
  v15 = sub_7077B0(a1, v10 + 8, a4);
  result = 0;
  if ( (v15 & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
  {
    v14 = nullptr;
    v12 = 0;
    v20 = nullptr;
    v13 = nullptr;
    v21 = 0;
    goto LABEL_20;
  }
  return result;
}
