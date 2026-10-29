__int64 __fastcall ZSTD_decompressContinue(__int64 a1, char *a2, unsigned __int64 a3, _DWORD *a4, unsigned __int64 a5)
{
  int v9; // esi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r12
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rax
  char *v18; // r14
  int v19; // ecx
  bool v20; // zf
  int v21; // eax
  int v22; // edx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // [rsp+8h] [rbp-60h]
  int v27; // [rsp+1Ch] [rbp-4Ch] BYREF
  int v28; // [rsp+20h] [rbp-48h]
  unsigned int v29; // [rsp+24h] [rbp-44h]
  unsigned __int64 v30; // [rsp+28h] [rbp-40h]

  v9 = *(_DWORD *)(a1 + 29996);
  v30 = __readfsqword(0x28u);
  v10 = *(_QWORD *)(a1 + 29920);
  if ( (unsigned int)(v9 - 3) <= 1 && !*(_DWORD *)(a1 + 29992) )
  {
    if ( v10 > a5 )
      v10 = a5;
    if ( !v10 )
      v10 = 1;
  }
  v11 = -72;
  if ( a5 == v10 )
  {
    v11 = -1;
    sub_6EE50(a1, a2, a3);
    v13 = a5 + *(_QWORD *)(a1 + 29976);
    *(_QWORD *)(a1 + 29976) = v13;
    switch ( *(_DWORD *)(a1 + 29996) )
    {
      case 0:
        v22 = *(_DWORD *)(a1 + 30104);
        if ( v22 || (*a4 & 0xFFFFFFF0) != 0x184D2A50 )
        {
          v23 = sub_617E0((__int64)a4, a5, v22);
          v11 = v23;
          *(_QWORD *)(a1 + 30096) = v23;
          if ( v23 <= 0xFFFFFFFFFFFFFF88LL )
          {
            v24 = v23 - a5;
            memcpy((void *)(a1 + 95940), a4, a5);
            *(_QWORD *)(a1 + 29920) = v24;
            v11 = 0;
            *(_DWORD *)(a1 + 29996) = 1;
          }
        }
        else
        {
          v11 = 0;
          memcpy((void *)(a1 + 95940), a4, a5);
          *(_DWORD *)(a1 + 29996) = 6;
          *(_QWORD *)(a1 + 29920) = 8 - a5;
        }
        return v11;
      case 1:
        memcpy((void *)(*(_QWORD *)(a1 + 30096) + a1 + 95940 - a5), a4, a5);
        v11 = sub_623B0(a1, a1 + 95940, *(_QWORD *)(a1 + 30096));
        if ( v11 <= 0xFFFFFFFFFFFFFF88LL )
        {
          *(_QWORD *)(a1 + 29920) = 3;
          v11 = 0;
          *(_DWORD *)(a1 + 29996) = 2;
        }
        return v11;
      case 2:
        v11 = sub_6C4D0(a4, 3, &v27);
        if ( v11 <= 0xFFFFFFFFFFFFFF88LL )
        {
          if ( v11 > *(unsigned int *)(a1 + 29944) )
            return -20;
          v21 = v27;
          *(_QWORD *)(a1 + 29920) = v11;
          *(_DWORD *)(a1 + 29992) = v21;
          *(_QWORD *)(a1 + 30160) = v29;
          if ( v11 )
          {
            v11 = 0;
            *(_DWORD *)(a1 + 29996) = (v28 != 0) + 3;
          }
          else
          {
            if ( v28 )
            {
              if ( !*(_DWORD *)(a1 + 29960) )
                goto LABEL_58;
              goto LABEL_33;
            }
            *(_QWORD *)(a1 + 29920) = 3;
            *(_DWORD *)(a1 + 29996) = 2;
          }
        }
        return v11;
      case 3:
      case 4:
        v16 = *(_DWORD *)(a1 + 29992);
        if ( v16 == 1 )
        {
          v11 = *(_QWORD *)(a1 + 30160);
          if ( a3 < v11 )
          {
            *(_QWORD *)(a1 + 29920) = 0;
            return -70;
          }
          if ( a2 )
          {
            memset(a2, *(unsigned __int8 *)a4, *(_QWORD *)(a1 + 30160));
            *(_QWORD *)(a1 + 29920) = 0;
            goto LABEL_21;
          }
          *(_QWORD *)(a1 + 29920) = 0;
          v18 = nullptr;
          if ( v11 )
            return -74;
        }
        else
        {
          if ( v16 )
          {
            v11 = -20;
            if ( v16 != 2 )
              return v11;
            v17 = sub_6EE20(a1, a2, a3, a4, a5, 1);
            *(_QWORD *)(a1 + 29920) = 0;
            v11 = v17;
LABEL_21:
            if ( v11 > 0xFFFFFFFFFFFFFF88LL )
              return v11;
            goto LABEL_22;
          }
          v11 = -70;
          if ( a5 > a3 )
            return v11;
          if ( a2 )
          {
            v11 = a5;
            memmove(a2, a4, a5);
            if ( a5 > 0xFFFFFFFFFFFFFF88LL )
              return v11;
            *(_QWORD *)(a1 + 29920) -= a5;
LABEL_22:
            v18 = &a2[v11];
            if ( *(unsigned int *)(a1 + 29944) < v11 )
              return -20;
            goto LABEL_23;
          }
          v18 = nullptr;
          v11 = 0;
          if ( a5 )
            return -74;
        }
LABEL_23:
        v19 = *(_DWORD *)(a1 + 30112);
        *(_QWORD *)(a1 + 29984) += v11;
        if ( v19 )
          sub_71DA0(a1 + 30008, a2, v11);
        v20 = *(_QWORD *)(a1 + 29920) == 0;
        *(_QWORD *)(a1 + 29888) = v18;
        if ( !v20 )
          return v11;
        if ( *(_DWORD *)(a1 + 29996) != 4 )
        {
          *(_DWORD *)(a1 + 29996) = 2;
          *(_QWORD *)(a1 + 29920) = 3;
          return v11;
        }
        v25 = *(_QWORD *)(a1 + 29928);
        if ( v25 == -1 || v25 == *(_QWORD *)(a1 + 29984) )
        {
          if ( *(_DWORD *)(a1 + 29960) )
          {
LABEL_33:
            *(_QWORD *)(a1 + 29920) = 4;
            *(_DWORD *)(a1 + 29996) = 5;
          }
          else
          {
            if ( *(_QWORD *)((char *)&loc_176E0 + a1) && &ZSTD_trace_decompress_end )
              sub_61A00(a1, *(_QWORD *)(a1 + 29984), *(_QWORD *)(a1 + 29976), 1);
            *(_QWORD *)(a1 + 29920) = 0;
LABEL_58:
            *(_DWORD *)(a1 + 29996) = 0;
          }
          return v11;
        }
        return -20;
      case 5:
        if ( !*(_DWORD *)(a1 + 30112) || (v26 = v13, v11 = -22, v14 = sub_71FB0(a1 + 30008), v13 = v26, *a4 == v14) )
        {
          if ( *(_QWORD *)((char *)&loc_176E0 + a1) && &ZSTD_trace_decompress_end )
            sub_61A00(a1, *(_QWORD *)(a1 + 29984), v13, 1);
          goto LABEL_15;
        }
        return v11;
      case 6:
        v11 = 0;
        memcpy((char *)&dword_176CC + a1 - a5, a4, a5);
        v15 = *(unsigned int *)((char *)&dword_176C8 + a1);
        *(_DWORD *)(a1 + 29996) = 7;
        *(_QWORD *)(a1 + 29920) = v15;
        return v11;
      case 7:
LABEL_15:
        *(_QWORD *)(a1 + 29920) = 0;
        v11 = 0;
        *(_DWORD *)(a1 + 29996) = 0;
        return v11;
      default:
        return v11;
    }
  }
  return v11;
}

