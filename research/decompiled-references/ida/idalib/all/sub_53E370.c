__int64 __fastcall sub_53E370(__int64 a1, char a2)
{
  int v3; // r14d
  unsigned int v4; // r12d
  unsigned int v5; // eax
  int v6; // r8d
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rdi
  int v11; // eax
  int v12; // r12d
  __int64 v13; // r15
  char v14; // dl
  _BYTE *v15; // rdi
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r9
  _QWORD *v19; // rbx
  _QWORD *v20; // rbp
  void *v21; // rdi
  __int64 v23; // [rsp+0h] [rbp-98h]
  __int64 *v24; // [rsp+8h] [rbp-90h]
  unsigned __int64 v25; // [rsp+10h] [rbp-88h]
  __int64 v26; // [rsp+20h] [rbp-78h] BYREF
  int v27; // [rsp+28h] [rbp-70h] BYREF
  void *v28; // [rsp+30h] [rbp-68h]
  int *v29; // [rsp+38h] [rbp-60h]
  int *v30; // [rsp+40h] [rbp-58h]
  __int64 v31; // [rsp+48h] [rbp-50h]
  unsigned __int64 v32; // [rsp+58h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  v3 = *(_DWORD *)(a1 + 44) & 0x400;
  if ( !v3 )
    goto LABEL_6;
  v4 = *(unsigned __int8 *)(a1 + 51);
  if ( (_BYTE)v4 )
    return 0;
  if ( *(_QWORD *)(a1 + 24) <= 0xFFFFFFFE )
  {
    LOBYTE(v5) = sub_534320(a1);
    v4 = v5;
    if ( (_BYTE)v5 )
    {
      *(_BYTE *)(a1 + 50) = 0;
      *(_DWORD *)(a1 + 44) = v6 & 0xFFFFFF9F;
LABEL_6:
      v7 = *(_QWORD *)a1;
      v27 = 0;
      v29 = &v27;
      v30 = &v27;
      v8 = *(_QWORD *)(a1 + 8);
      v28 = nullptr;
      v31 = 0;
      v23 = v7 + 144 * v8;
      if ( v23 == v7 )
        return 1;
      v9 = v7;
      while ( 1 )
      {
        v10 = *(_QWORD *)(v9 + 64);
        if ( !(_BYTE)v10 || (v11 = *(_DWORD *)(v9 + 132), (v11 & 0xFFFF800F) != 0) )
        {
LABEL_37:
          v4 = 0;
          goto LABEL_38;
        }
        if ( (v11 & 0x20) != 0 )
        {
          if ( (v10 & 0x100) == 0 )
            goto LABEL_37;
          if ( a2 )
          {
            if ( *(_BYTE *)(a1 + 51) && *(_QWORD *)v9 )
              goto LABEL_37;
            goto LABEL_12;
          }
          if ( (unsigned __int8)get_tinfo_property(v10, 2)
            && (get_tinfo_property(*(_QWORD *)(v9 + 64), 2) & 0x3F) != 0xD
            || *(_BYTE *)(a1 + 51) && *(_QWORD *)v9 )
          {
            goto LABEL_37;
          }
        }
        else
        {
          if ( *(_BYTE *)(a1 + 51) && *(_QWORD *)v9 )
            goto LABEL_37;
          if ( a2 )
            goto LABEL_12;
        }
        if ( *(_QWORD *)(v9 + 24) > 1u && !get_tinfo_property(*(_QWORD *)(v9 + 64), 6) )
        {
          v12 = 2;
          v24 = (__int64 *)(v9 + 16);
          v13 = (*(_QWORD *)(v9 + 24) == 0) + *(_QWORD *)(v9 + 24) - 1LL;
          sub_4313A0(&v26, v9 + 16);
          while ( !v14 )
          {
            v15 = *(_BYTE **)(v9 + 16);
            v16 = (__int64)v15;
            if ( v13 )
            {
              v17 = *(_QWORD *)(v9 + 24);
              v18 = v13 + 1;
              if ( v17 < v13 + 1 )
              {
                if ( *(_QWORD *)(v9 + 32) < v18 )
                {
                  v16 = qvector_reserve(v24, *(_QWORD *)(v9 + 16), v13 + 1, 1);
                  v17 = *(_QWORD *)(v9 + 24);
                  v18 = v13 + 1;
                  *(_QWORD *)(v9 + 16) = v16;
                }
                v25 = v18;
                memset((void *)(v16 + v17), 0, v18 - v17);
                v15 = *(_BYTE **)(v9 + 16);
                *(_QWORD *)(v9 + 24) = v25;
              }
              else if ( v18 != v17 )
              {
                *(_QWORD *)(v9 + 24) = v18;
              }
              v15[v13] = 0;
            }
            else if ( v15 )
            {
              *(_QWORD *)(v9 + 24) = 0;
              qfree(v15);
              *(_QWORD *)(v9 + 16) = 0;
              *(_QWORD *)(v9 + 32) = 0;
            }
            sub_35A910(v24);
            ++v12;
            sub_4313A0(&v26, (__int64)v24);
          }
        }
        sub_535100((__int64 *)(v9 + 72));
LABEL_12:
        if ( v3 )
        {
          *(_DWORD *)(v9 + 132) &= ~0x40u;
          *(_DWORD *)(v9 + 128) = 0;
          *(_BYTE *)(v9 + 136) = 0;
        }
        v9 += 144;
        if ( v23 == v9 )
        {
          v4 = 1;
LABEL_38:
          v19 = v28;
          if ( v28 )
          {
            do
            {
              v20 = v19;
              sub_533AD0((_QWORD *)v19[3]);
              v21 = (void *)v19[4];
              v19 = (_QWORD *)v19[2];
              if ( v21 )
              {
                v20[5] = 0;
                qfree(v21);
              }
              operator delete(v20, 0x38u);
            }
            while ( v19 );
          }
          return v4;
        }
      }
    }
  }
  return v4;
}
