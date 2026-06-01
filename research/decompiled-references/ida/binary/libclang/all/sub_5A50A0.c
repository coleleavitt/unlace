int sub_5A50A0()
{
  __int64 v0; // r9
  __int64 v1; // r9
  __int64 v2; // r9
  int v4; // [rsp+0h] [rbp-58h] BYREF
  int v5; // [rsp+4h] [rbp-54h] BYREF
  int *v6; // [rsp+8h] [rbp-50h] BYREF
  const char *v7; // [rsp+10h] [rbp-48h] BYREF
  __int64 v8; // [rsp+18h] [rbp-40h]

  v7 = "The number of searches per loop in the window algorithm. 0 means no search number limit.";
  v5 = 6;
  v6 = &v5;
  v4 = 1;
  v8 = 88;
  ((void (__fastcall *)(__int64 *, const char *, const char **, int *, int **))sub_3538710)(
    qword_4B02DA0,
    "window-search-num",
    &v7,
    &v4,
    &v6);
  __cxa_atexit(sub_1F6C940, qword_4B02DA0, &off_47CFE00);
  v6 = &v5;
  v7 = "The ratio of searches per loop in the window algorithm. 100 means search all positions in the loop, while 0 means"
       " not performing any search.";
  v4 = 1;
  v5 = 40;
  v8 = 140;
  ((void (__fastcall *)(__int64 *, const char *, const char **, int *, int **))sub_35388D0)(
    qword_4B02CE0,
    "window-search-ratio",
    &v7,
    &v4,
    &v6);
  __cxa_atexit(sub_1F6C940, qword_4B02CE0, &off_47CFE00);
  v6 = &v5;
  v7 = "The coefficient used when initializing II in the window algorithm.";
  v4 = 1;
  v5 = 5;
  v8 = 66;
  ((void (__fastcall *)(__int64 *, const char *, const char **, int *, int **))sub_3538A90)(
    qword_4B02C20,
    "window-ii-coeff",
    &v7,
    &v4,
    &v6);
  __cxa_atexit(sub_1F6C940, qword_4B02C20, &off_47CFE00);
  v6 = &v5;
  v7 = "The lower limit of the scheduling region in the window algorithm.";
  v4 = 1;
  v5 = 3;
  v8 = 65;
  ((void (__fastcall *)(__int64 *, const char *, const char **, int *, int **, __int64))sub_35388D0)(
    qword_4B02B60,
    "window-region-limit",
    &v7,
    &v4,
    &v6,
    v0);
  __cxa_atexit(sub_1F6C940, qword_4B02B60, &off_47CFE00);
  v6 = &v5;
  v7 = "The lower limit of the difference between best II and base II in the window algorithm. If the difference is small"
       "er than this lower limit, window scheduling will not be performed.";
  v4 = 1;
  v5 = 2;
  v8 = 179;
  ((void (__fastcall *)(__int64 *, const char *, const char **, int *, int **, __int64))sub_3538710)(
    qword_4B02AA0,
    "window-diff-limit",
    &v7,
    &v4,
    &v6,
    v1);
  __cxa_atexit(sub_1F6C940, qword_4B02AA0, &off_47CFE00);
  v6 = &v5;
  v5 = 1000;
  v4 = 1;
  v7 = "The upper limit of II in the window algorithm.";
  v8 = 46;
  ((void (__fastcall *)(__int64 *, const char *, const char **, int *, int **, __int64))sub_3538A90)(
    qword_4B029E0,
    "window-ii-limit",
    &v7,
    &v4,
    &v6,
    v2);
  return __cxa_atexit(sub_1F6C940, qword_4B029E0, &off_47CFE00);
}

