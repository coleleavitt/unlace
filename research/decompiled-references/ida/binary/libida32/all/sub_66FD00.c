__int64 __fastcall sub_66FD00(__int64 a1, __int64 *a2, int *a3, unsigned int a4, __int64 a5, __int64 *a6)
{
  unsigned int tinfo_details; // ebx
  int v7; // eax
  __int64 v8; // rdi
  __int64 v11; // rdi
  char *v12; // rdi
  __int64 v13; // r13
  __int64 v14; // r12
  char *v15; // r14
  void *v16; // rdi
  void *v17; // rdi
  int v18; // r14d
  __int64 v19; // rax
  unsigned __int64 v20; // r12
  _QWORD *v21; // rdx
  _QWORD *v22; // r15
  __int64 v23; // r8
  int v24; // eax
  unsigned int v25; // r13d
  int v26; // eax
  __int64 tinfo_property; // rax
  unsigned int v28; // esi
  unsigned __int64 v29; // [rsp+0h] [rbp-D0h]
  unsigned __int64 v31; // [rsp+18h] [rbp-B8h]
  int v32; // [rsp+20h] [rbp-B0h]
  unsigned int v34; // [rsp+28h] [rbp-A8h]
  unsigned __int64 v35; // [rsp+28h] [rbp-A8h]
  unsigned __int64 v36; // [rsp+30h] [rbp-A0h]
  unsigned int v40; // [rsp+5Ch] [rbp-74h] BYREF
  void *ptr; // [rsp+60h] [rbp-70h] BYREF
  __int128 v42; // [rsp+68h] [rbp-68h]
  __int128 v43; // [rsp+78h] [rbp-58h]
  __int64 v44; // [rsp+88h] [rbp-48h]
  int v45; // [rsp+90h] [rbp-40h]
  unsigned __int64 v46; // [rsp+98h] [rbp-38h]

  tinfo_details = 0;
  v7 = *a3;
  v8 = *a6;
  v46 = __readfsqword(0x28u);
  v32 = v7;
  if ( (get_tinfo_property(v8, 2) & 0x3F) != 0xD )
    return tinfo_details;
  v11 = *a6;
  ptr = nullptr;
  v44 = 0;
  v45 = 1;
  v42 = 0;
  v43 = 0;
  tinfo_details = get_tinfo_details(v11, 13, &ptr);
  if ( !(_BYTE)tinfo_details )
    goto LABEL_8;
  if ( (_QWORD)v42 && get_tinfo_property(*((_QWORD *)ptr + 16 * (_QWORD)v42 - 8), 287) )
  {
    v31 = a4;
    if ( a4 )
    {
      v29 = a4 / (unsigned __int64)a4;
LABEL_21:
      v18 = v32;
      v19 = v42;
      v36 = 0;
      do
      {
        v20 = 0;
        if ( v19 )
        {
          do
          {
            v21 = (char *)ptr + 128 * v20;
            v22 = v21;
            v23 = *v21 >> 3;
            if ( v19 - 1 == v20
              && (v35 = *v21 >> 3, tinfo_property = get_tinfo_property(v21[8], 287), LODWORD(v23) = v35, tinfo_property) )
            {
              v24 = v35;
              v28 = 0;
              if ( v31 >= v35 )
                v28 = v31 - v35;
              v25 = v28;
            }
            else
            {
              v24 = v23;
              v25 = v22[1] >> 3;
            }
            v40 = v18 + v24;
            if ( (v22[9] & 0xFLL) == 0xA )
            {
              v34 = *((_DWORD *)v22 + 20);
              if ( v34 != -1 )
              {
                v26 = sub_69E150(v22 + 9, v22 + 8);
                sub_66F9D0(a1, a2, &v40, v25, v26, v34, a5);
              }
            }
            else if ( (get_tinfo_property(v22[8], 2) & 0x3F) == 0xD )
            {
              sub_66FD00(a1, a2, &v40, v25, a5, v22 + 8);
            }
            v19 = v42;
            ++v20;
          }
          while ( v20 < (unsigned __int64)v42 );
        }
        ++v36;
        v18 += v31;
      }
      while ( v36 < v29 );
      goto LABEL_30;
    }
LABEL_8:
    tinfo_details = 0;
    goto LABEL_9;
  }
  v31 = v43;
  if ( !(_QWORD)v43 )
    goto LABEL_8;
  if ( a4 >= (unsigned __int64)v43 )
  {
    v29 = a4 / (unsigned __int64)v43;
    goto LABEL_21;
  }
LABEL_30:
  *a3 = a4 + v32;
LABEL_9:
  v12 = (char *)ptr;
  if ( ptr )
  {
    v13 = v42;
    if ( (_QWORD)v42 )
    {
      v14 = 0;
      do
      {
        v15 = &v12[128 * v14];
        clear_tinfo_t(v15 + 64);
        v16 = *((void **)v15 + 5);
        if ( v16 )
        {
          *((_QWORD *)v15 + 6) = 0;
          qfree(v16);
        }
        v17 = *((void **)v15 + 2);
        if ( v17 )
        {
          *((_QWORD *)v15 + 3) = 0;
          qfree(v17);
        }
        ++v14;
        v12 = (char *)ptr;
      }
      while ( v13 != v14 );
    }
    *(_QWORD *)&v42 = 0;
    qfree(v12);
  }
  return tinfo_details;
}

